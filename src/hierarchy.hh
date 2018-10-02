/* Copyright 2017-2018 ccls Authors

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

  http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#pragma once

#include "lsp.h"

#include <algorithm>
#include <queue>

template <typename Node>
void FlattenHierarchy(const Node &root, Out_LocationList &out) {
  std::queue<const Node *> q;
  for (auto &entry : root.children)
    q.push(&entry);
  while (q.size()) {
    auto *entry = q.front();
    q.pop();
    if (entry->location.uri.raw_uri.size())
      out.result.push_back({entry->location});
    for (auto &entry1 : entry->children)
      q.push(&entry1);
  }
  std::sort(out.result.begin(), out.result.end());
  out.result.erase(std::unique(out.result.begin(), out.result.end()),
    out.result.end());
}

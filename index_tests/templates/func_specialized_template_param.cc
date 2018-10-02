template<class T>
class Template {};

struct Foo {
  void Bar(Template<double>&);
};

void Foo::Bar(Template<double>&) {}

/*
OUTPUT:
{
  "includes": [],
  "skipped_ranges": [],
  "usr2func": [{
      "usr": 8412238651648388423,
      "detailed_name": "void Foo::Bar(Template<double> &)",
      "qual_name_offset": 5,
      "short_name": "Bar",
      "kind": 6,
      "storage": 0,
      "declarations": ["5:8-5:11|5:3-5:30|15041163540773201510|2|1025|-1"],
      "spell": "8:11-8:14|15041163540773201510|2|1026|-1",
      "extent": "8:1-8:36|15041163540773201510|2|0|-1",
      "bases": [],
      "derived": [],
      "vars": [],
      "uses": [],
      "callees": []
    }],
  "usr2type": [{
      "usr": 15041163540773201510,
      "detailed_name": "struct Foo {}",
      "qual_name_offset": 7,
      "short_name": "Foo",
      "kind": 23,
      "declarations": [],
      "spell": "4:8-4:11|0|1|2|-1",
      "extent": "4:1-6:2|0|1|0|-1",
      "alias_of": 0,
      "bases": [],
      "derived": [],
      "types": [],
      "funcs": [8412238651648388423],
      "vars": [],
      "instances": [],
      "uses": ["8:6-8:9|0|1|4|-1"]
    }, {
      "usr": 17107291254533526269,
      "detailed_name": "class Template {}",
      "qual_name_offset": 6,
      "short_name": "Template",
      "kind": 5,
      "declarations": [],
      "spell": "2:7-2:15|0|1|2|-1",
      "extent": "2:1-2:18|0|1|0|-1",
      "alias_of": 0,
      "bases": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [],
      "instances": [],
      "uses": ["5:12-5:20|15041163540773201510|2|4|-1", "8:15-8:23|0|1|4|-1"]
    }],
  "usr2var": []
}
*/

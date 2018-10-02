template<typename T>
void accept(T);

void foo() {
  accept(1);
  accept(true);
}

/*
OUTPUT:
{
  "includes": [],
  "skipped_ranges": [],
  "usr2func": [{
      "usr": 4259594751088586730,
      "detailed_name": "void foo()",
      "qual_name_offset": 5,
      "short_name": "foo",
      "kind": 12,
      "storage": 0,
      "declarations": [],
      "spell": "4:6-4:9|0|1|2|-1",
      "extent": "4:1-7:2|0|1|0|-1",
      "bases": [],
      "derived": [],
      "vars": [],
      "uses": [],
      "callees": ["5:3-5:9|10585861037135727329|3|16420", "6:3-6:9|10585861037135727329|3|16420"]
    }, {
      "usr": 10585861037135727329,
      "detailed_name": "void accept(T)",
      "qual_name_offset": 5,
      "short_name": "accept",
      "kind": 12,
      "storage": 0,
      "declarations": ["2:6-2:12|2:1-2:15|0|1|1|-1"],
      "bases": [],
      "derived": [],
      "vars": [],
      "uses": ["5:3-5:9|4259594751088586730|3|16420|-1", "6:3-6:9|4259594751088586730|3|16420|-1"],
      "callees": []
    }],
  "usr2type": [],
  "usr2var": []
}
*/

void called(int a);

int gen();

struct Foo {
  static int static_var;
  int field_var;
};

int Foo::static_var = 0;

void foo() {
  int a = 5;
  called(a + gen() + Foo().field_var + Foo::static_var);
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
      "spell": "12:6-12:9|0|1|2|-1",
      "extent": "12:1-15:2|0|1|0|-1",
      "bases": [],
      "derived": [],
      "vars": [8039186520399841081],
      "uses": [],
      "callees": ["14:3-14:9|18319417758892371313|3|16420", "14:14-14:17|11404602816585117695|3|16420"]
    }, {
      "usr": 11404602816585117695,
      "detailed_name": "int gen()",
      "qual_name_offset": 4,
      "short_name": "gen",
      "kind": 12,
      "storage": 0,
      "declarations": ["3:5-3:8|3:1-3:10|0|1|1|-1"],
      "bases": [],
      "derived": [],
      "vars": [],
      "uses": ["14:14-14:17|4259594751088586730|3|16420|-1"],
      "callees": []
    }, {
      "usr": 18319417758892371313,
      "detailed_name": "void called(int a)",
      "qual_name_offset": 5,
      "short_name": "called",
      "kind": 12,
      "storage": 0,
      "declarations": ["1:6-1:12|1:1-1:19|0|1|1|-1"],
      "bases": [],
      "derived": [],
      "vars": [],
      "uses": ["14:3-14:9|4259594751088586730|3|16420|-1"],
      "callees": []
    }],
  "usr2type": [{
      "usr": 53,
      "detailed_name": "",
      "qual_name_offset": 0,
      "short_name": "",
      "kind": 0,
      "declarations": [],
      "alias_of": 0,
      "bases": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [],
      "instances": [11489549839875479478, 9648311402855509901, 11489549839875479478, 8039186520399841081],
      "uses": []
    }, {
      "usr": 15041163540773201510,
      "detailed_name": "struct Foo {}",
      "qual_name_offset": 7,
      "short_name": "Foo",
      "kind": 23,
      "declarations": [],
      "spell": "5:8-5:11|0|1|2|-1",
      "extent": "5:1-8:2|0|1|0|-1",
      "alias_of": 0,
      "bases": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [{
          "L": 9648311402855509901,
          "R": 0
        }],
      "instances": [],
      "uses": ["10:5-10:8|0|1|4|-1", "14:22-14:25|4259594751088586730|3|4|-1", "14:40-14:43|4259594751088586730|3|4|-1"]
    }],
  "usr2var": [{
      "usr": 8039186520399841081,
      "detailed_name": "int a",
      "qual_name_offset": 4,
      "short_name": "a",
      "hover": "int a = 5",
      "declarations": [],
      "spell": "13:7-13:8|4259594751088586730|3|2|-1",
      "extent": "13:3-13:12|4259594751088586730|3|0|-1",
      "type": 53,
      "uses": ["14:10-14:11|4259594751088586730|3|12|-1"],
      "kind": 13,
      "storage": 0
    }, {
      "usr": 9648311402855509901,
      "detailed_name": "int Foo::field_var",
      "qual_name_offset": 4,
      "short_name": "field_var",
      "declarations": [],
      "spell": "7:7-7:16|15041163540773201510|2|1026|-1",
      "extent": "7:3-7:16|15041163540773201510|2|0|-1",
      "type": 53,
      "uses": ["14:28-14:37|4259594751088586730|3|12|-1"],
      "kind": 8,
      "storage": 0
    }, {
      "usr": 11489549839875479478,
      "detailed_name": "static int Foo::static_var",
      "qual_name_offset": 11,
      "short_name": "static_var",
      "declarations": ["6:14-6:24|6:3-6:24|15041163540773201510|2|1025|-1"],
      "spell": "10:10-10:20|15041163540773201510|2|1026|-1",
      "extent": "10:1-10:24|15041163540773201510|2|0|-1",
      "type": 53,
      "uses": ["14:45-14:55|4259594751088586730|3|12|-1"],
      "kind": 13,
      "storage": 2
    }]
}
*/

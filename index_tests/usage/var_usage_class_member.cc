class Foo {
public:
  int x;
  int y;
};

void accept(int);
void accept(int*);

void foo() {
  Foo f;
  f.x = 3;
  f.x += 5;
  accept(f.x);
  accept(f.x + 20);
  accept(&f.x);
  accept(f.y);
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
      "spell": "10:6-10:9|0|1|2|-1",
      "extent": "10:1-18:2|0|1|0|-1",
      "bases": [],
      "derived": [],
      "vars": [14669930844300034456],
      "uses": [],
      "callees": ["14:3-14:9|17175780305784503374|3|16420", "15:3-15:9|17175780305784503374|3|16420", "16:3-16:9|12086644540399881766|3|16420", "17:3-17:9|17175780305784503374|3|16420"]
    }, {
      "usr": 12086644540399881766,
      "detailed_name": "void accept(int *)",
      "qual_name_offset": 5,
      "short_name": "accept",
      "kind": 12,
      "storage": 0,
      "declarations": ["8:6-8:12|8:1-8:18|0|1|1|-1"],
      "bases": [],
      "derived": [],
      "vars": [],
      "uses": ["16:3-16:9|4259594751088586730|3|16420|-1"],
      "callees": []
    }, {
      "usr": 17175780305784503374,
      "detailed_name": "void accept(int)",
      "qual_name_offset": 5,
      "short_name": "accept",
      "kind": 12,
      "storage": 0,
      "declarations": ["7:6-7:12|7:1-7:17|0|1|1|-1"],
      "bases": [],
      "derived": [],
      "vars": [],
      "uses": ["14:3-14:9|4259594751088586730|3|16420|-1", "15:3-15:9|4259594751088586730|3|16420|-1", "17:3-17:9|4259594751088586730|3|16420|-1"],
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
      "instances": [4220150017963593039, 3873837747174060388],
      "uses": []
    }, {
      "usr": 15041163540773201510,
      "detailed_name": "class Foo {}",
      "qual_name_offset": 6,
      "short_name": "Foo",
      "kind": 5,
      "declarations": [],
      "spell": "1:7-1:10|0|1|2|-1",
      "extent": "1:1-5:2|0|1|0|-1",
      "alias_of": 0,
      "bases": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [{
          "L": 4220150017963593039,
          "R": 0
        }, {
          "L": 3873837747174060388,
          "R": 32
        }],
      "instances": [14669930844300034456],
      "uses": ["11:3-11:6|4259594751088586730|3|4|-1"]
    }],
  "usr2var": [{
      "usr": 3873837747174060388,
      "detailed_name": "int Foo::y",
      "qual_name_offset": 4,
      "short_name": "y",
      "declarations": [],
      "spell": "4:7-4:8|15041163540773201510|2|1026|-1",
      "extent": "4:3-4:8|15041163540773201510|2|0|-1",
      "type": 53,
      "uses": ["17:12-17:13|4259594751088586730|3|12|-1"],
      "kind": 8,
      "storage": 0
    }, {
      "usr": 4220150017963593039,
      "detailed_name": "int Foo::x",
      "qual_name_offset": 4,
      "short_name": "x",
      "declarations": [],
      "spell": "3:7-3:8|15041163540773201510|2|1026|-1",
      "extent": "3:3-3:8|15041163540773201510|2|0|-1",
      "type": 53,
      "uses": ["12:5-12:6|4259594751088586730|3|20|-1", "13:5-13:6|4259594751088586730|3|4|-1", "14:12-14:13|4259594751088586730|3|12|-1", "15:12-15:13|4259594751088586730|3|12|-1", "16:13-16:14|4259594751088586730|3|132|-1"],
      "kind": 8,
      "storage": 0
    }, {
      "usr": 14669930844300034456,
      "detailed_name": "Foo f",
      "qual_name_offset": 4,
      "short_name": "f",
      "declarations": [],
      "spell": "11:7-11:8|4259594751088586730|3|2|-1",
      "extent": "11:3-11:8|4259594751088586730|3|0|-1",
      "type": 15041163540773201510,
      "uses": ["12:3-12:4|4259594751088586730|3|4|-1", "13:3-13:4|4259594751088586730|3|4|-1", "14:10-14:11|4259594751088586730|3|4|-1", "15:10-15:11|4259594751088586730|3|4|-1", "16:11-16:12|4259594751088586730|3|4|-1", "17:10-17:11|4259594751088586730|3|4|-1"],
      "kind": 13,
      "storage": 0
    }]
}
*/

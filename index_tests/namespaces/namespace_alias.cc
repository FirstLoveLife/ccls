namespace foo {
    namespace bar {
         namespace baz {
             int qux = 42;
         }
    }
}

namespace fbz = foo::bar::baz;

void func() {
  int a = foo::bar::baz::qux;
  int b = fbz::qux;
}

/*
OUTPUT:
{
  "includes": [],
  "skipped_ranges": [],
  "usr2func": [{
      "usr": 10818727483146447186,
      "detailed_name": "void func()",
      "qual_name_offset": 5,
      "short_name": "func",
      "kind": 12,
      "storage": 0,
      "declarations": [],
      "spell": "11:6-11:10|0|1|2|-1",
      "extent": "11:1-14:2|0|1|0|-1",
      "bases": [],
      "derived": [],
      "vars": [6030927277961448585, 7657277353101371136],
      "uses": [],
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
      "instances": [15042442838933090518, 6030927277961448585, 7657277353101371136],
      "uses": []
    }, {
      "usr": 926793467007732869,
      "detailed_name": "namespace foo {}",
      "qual_name_offset": 10,
      "short_name": "foo",
      "kind": 3,
      "declarations": ["1:11-1:14|1:1-7:2|0|1|1|-1"],
      "alias_of": 0,
      "bases": [],
      "derived": [17805385787823406700],
      "types": [17805385787823406700],
      "funcs": [],
      "vars": [],
      "instances": [],
      "uses": ["9:17-9:20|0|1|4|-1", "12:11-12:14|10818727483146447186|3|4|-1"]
    }, {
      "usr": 11879713791858506216,
      "detailed_name": "namespace fbz = foo::bar::baz",
      "qual_name_offset": 10,
      "short_name": "fbz",
      "kind": 252,
      "declarations": ["9:11-9:14|9:1-9:30|0|1|1|-1"],
      "alias_of": 14450849931009540802,
      "bases": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [],
      "instances": [],
      "uses": ["13:11-13:14|10818727483146447186|3|4|-1"]
    }, {
      "usr": 14450849931009540802,
      "detailed_name": "namespace foo::bar::baz {}",
      "qual_name_offset": 10,
      "short_name": "baz",
      "kind": 3,
      "declarations": ["3:20-3:23|3:10-5:11|17805385787823406700|2|1025|-1"],
      "alias_of": 0,
      "bases": [17805385787823406700],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [{
          "L": 15042442838933090518,
          "R": -1
        }],
      "instances": [],
      "uses": ["9:27-9:30|0|1|4|-1", "12:21-12:24|10818727483146447186|3|4|-1"]
    }, {
      "usr": 17805385787823406700,
      "detailed_name": "namespace foo::bar {}",
      "qual_name_offset": 10,
      "short_name": "bar",
      "kind": 3,
      "declarations": ["2:15-2:18|2:5-6:6|926793467007732869|2|1025|-1"],
      "alias_of": 0,
      "bases": [926793467007732869],
      "derived": [14450849931009540802],
      "types": [14450849931009540802],
      "funcs": [],
      "vars": [],
      "instances": [],
      "uses": ["9:22-9:25|0|1|4|-1", "12:16-12:19|10818727483146447186|3|4|-1"]
    }],
  "usr2var": [{
      "usr": 6030927277961448585,
      "detailed_name": "int a",
      "qual_name_offset": 4,
      "short_name": "a",
      "hover": "int a = foo::bar::baz::qux",
      "declarations": [],
      "spell": "12:7-12:8|10818727483146447186|3|2|-1",
      "extent": "12:3-12:29|10818727483146447186|3|0|-1",
      "type": 53,
      "uses": [],
      "kind": 13,
      "storage": 0
    }, {
      "usr": 7657277353101371136,
      "detailed_name": "int b",
      "qual_name_offset": 4,
      "short_name": "b",
      "hover": "int b = fbz::qux",
      "declarations": [],
      "spell": "13:7-13:8|10818727483146447186|3|2|-1",
      "extent": "13:3-13:19|10818727483146447186|3|0|-1",
      "type": 53,
      "uses": [],
      "kind": 13,
      "storage": 0
    }, {
      "usr": 15042442838933090518,
      "detailed_name": "int foo::bar::baz::qux",
      "qual_name_offset": 4,
      "short_name": "qux",
      "hover": "int foo::bar::baz::qux = 42",
      "declarations": [],
      "spell": "4:18-4:21|14450849931009540802|2|1026|-1",
      "extent": "4:14-4:26|14450849931009540802|2|0|-1",
      "type": 53,
      "uses": ["12:26-12:29|10818727483146447186|3|12|-1", "13:16-13:19|10818727483146447186|3|12|-1"],
      "kind": 13,
      "storage": 0
    }]
}
*/

class Foo;
class Foo;
class Foo {};
class Foo;

/*
// NOTE: Separate decl/definition are not supported for classes. See source
//       for comments.
OUTPUT:
{
  "includes": [],
  "skipped_ranges": [],
  "usr2func": [],
  "usr2type": [{
      "usr": 15041163540773201510,
      "detailed_name": "class Foo",
      "qual_name_offset": 6,
      "short_name": "Foo",
      "kind": 5,
      "declarations": ["1:7-1:10|1:1-1:10|0|1|1|-1", "2:7-2:10|2:1-2:10|0|1|1|-1", "4:7-4:10|4:1-4:10|0|1|1|-1"],
      "spell": "3:7-3:10|0|1|2|-1",
      "extent": "3:1-3:13|0|1|0|-1",
      "alias_of": 0,
      "bases": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [],
      "instances": [],
      "uses": []
    }],
  "usr2var": []
}
*/

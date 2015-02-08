
**Libtypes** is a micro-library that defines a saner set of base types and names. It:

- typedefs shorter names for the base types, such as `ullong` instead of `unsigned long long`;
- defines an ordering enum type, `ord`, with values `LT`, `EQ` or `GT`;
- `#undef`s the `bool` macro provided by `stdbool.h`, and re-declares `bool` as a `typedef` of `_Bool` - this allows for code generation using the "bool" keyword;
- includes the libc headers that define or typedef more standardized types such as `size_t` or `int16_t`;
- defines a tuple for each type by `( type, typename, funcname )`, where `typename` is the name of the type in "generic" structs (e.g. `Vector_int`), and `funcname` is the name of the type in "generic" functions (e.g.  `int__add`).

The included libc headers have a `// @export` beside them to indicate that users of the header file can depend on those header files being included within.

I'll tag a new major version if I change anything, or add anything outside of the `libtypes_` namespace. Every version tag will be signed with [my GPG key](http://pool.sks-keyservers.net/pks/lookup?op=vindex&search=0xD020F814) (fingerprint: `0xD020F814`).

Libtypes is available at [Gitorious](https://gitorious.org/mcinglis/libtypes), [Bitbucket](https://bitbucket.org/mcinglis/libtypes), and [GitHub](https://github.com/mcinglis/libtypes).


## License: AGPL

**Copyright 2015 Malcolm Inglis <http://minglis.id.au>**

Libtypes is free software: you can redistribute it and/or modify it under the terms of the [GNU Affero General Public License](https://gnu.org/licenses/agpl.html) as published by the [Free Software Foundation](https://fsf.org), either version 3 of the License, or (at your option) any later version.

Libtypes is distributed in the hope that it will be useful, but **without any warranty**; without even the implied warranty of **merchantability** or **fitness for a particular purpose**. See the GNU Affero General Public License for more details.

You should have received a copy of the GNU Affero General Public License along with Libtypes. If not, see <https://gnu.org/licenses/>.


# Release History

## Version 4.0 - ?

### geant

* Extended the attributes `if` and `unless` to accept the values
  "true" and "false". This can be useful when automatically generating
  geant build files. See bug#2657770.
* Use ISE Eiffel's ec instead of ecb, so output is compatible with
  estudio; else estudio will complain about a corrupted project.
* Added support to set compilation directory to different directory
  than current directory. Define `GOBO_BUILD_PREFIX` and ISE compiler
  will now compile to that directory. This allows you to compile to
  a fast SSD or memdisk.
  Not yet supported for the Gobo compiler.
* Dropped support for the EIFGEN directory in task `<ise>`.
* Relative pathnames in the `<inherit>` clause are now relative to 
  the directory containing the current eant file (and not relative
  to the working directory where geant is currently running).
* Added optional attribute `fail_on_error` to task <delete> (true
  by default).
* Added attributes `array_size` and `inspect_actions` to task `<gelex>`.
* Added attribute `array_size` to task `<geyacc>`.
* Moved the code/doc/examples/tests to `$GOBO/tool/geant`.
* Moved the buildfiles to `$GOBO/library/common/config`. `geant` will
  automatically redirect inherited files which were located in 
  `$GOBO/misc` to the new location.

### gec

* Added option `--gelint` to force the whole content of classes to be
  checked (even features not reachable from the root creation procedure).
* Fixed bug in the generated C code for call agents whose feature was
  `FUNCTION.item` or `ROUTINE.call` and whose closed argument was a manifest
  tuple. See bug#2997112.
* Fixed implementation of class `IDENTIFIED_ROUTINES`. Object addresses
  were casted to `INTEGER_32`, which causes loss of information when
  compiled on a 64-bit computer. See bug#2999209.
* Fixed type system bug when processing constant attributes in
  inspect instructions. See bug#3238111.
* Fixed bug when an inspect instruction had no else-branch. No exception
  was raised.
* Fixed bug when running `gec --gelint ...`. Validity errors were
  reported twice.
* Qualified anchored types are now accepted by default.
* Implemented support for exceptions as objects.
* Moved the code/doc/examples/tests to `$GOBO/tool/gec`.

### gelex

* Made the generated scanners compilable in void-safe mode with ISE 7.3.
* Added support for pushing and popping start conditions.
* Added `reset_with_string` and `reset_with_file` in `YY_SCANNER`.
* Changed the default maximum size for manifest arrays to be 200.
* Changed the default for semantic actions to use `inspect` instructions
  instead of binary search with `if` instructions.
* Updated the documentation for the command-line options.
* Fixed generation of manifest arrays when the size of the generated table
  is a multiple of the maximum array size.
* Moved the code/doc/examples/tests to `$GOBO/tool/gelex`.

### gelint

* Fixed bug where it was reporting an internal error instead of a `VTCT` error
  when the type of a local variable was a generic class type whose base class
  did not exist.
* Report a `VIPR-3` error for inline agent of the once and external forms.
  This is not in ECMA 367-2, but a restriction in ISE.
* Qualified anchored types are now accepted by default.
* Moved the code/doc/examples/tests to `$GOBO/tool/gelint`.

### gepp

* Moved the code/doc/examples/tests to `$GOBO/tool/gepp`.

### getest

* Set exit code to 4 when at least one of the test cases has been aborted.
* Split the feature `build_suite` in smaller routines in the generated test
  harness so that the back-end C compiler (in particular MSVC under Windows)
  can compile the generated C code for this routine in a reasonable amount
  of time.
* Added command-line options to the generated test harness to monitor which
  of the registered test cases should be executed or ignored.
* Improved command-line processing of the generated test harness.
* Moved the code/doc/examples/tests to `$GOBO/tool/getest`.

### gexace

* Added option `syntax` to support the corresponding option in ECF.
* Added documentation explaining how to add a new option in Xace.
* Moved the code/doc/examples/tests to `$GOBO/tool/gexace`.

### gexslt

* Moved the code/doc/examples/tests to `$GOBO/tool/gexslt`.

### geyacc

* When specifying Eiffel types in the `%token` and `%type` clauses, in addition
  to what was accepted so far, it is now possible to use `like Current`,
  labeled tuples (e.g. `TUPLE [i, j: INTEGER; s: STRING]`) and type marks
  such as `expanded`, `reference`, `separate`, `attached`, `detachable`,
  `!` and `?`. See bug#2618271.
* When declaring `%token <EIFFEL_TYPE> ...`, the generated parser
  expects to find token values in the variable `last_<eiffel_type>_value`,
  where all non-alphanumeric characters in the type name `EIFFEL_TYPE`
  are replaced by underscores. It is now possible to customize the
  name of this variable to `last_<alias_name>_value` by declaring
  `%token <EIFFEL_TYPE as alias_name> ...`. See bug#2621302.
* Added support for qualified anchored types in `%type` and `%token`
  declarations in `.y` files.
* Eiffel classes need to be regenerated with `geyacc` from `.y` files because
  of a breaking change to make the internal stacks void-safe compliant.
  Otherwise this will result in a compilation error.
* Removed command-line option `--old_typing`.
* In order to be void-safe compliant, the generated token class has been
  made deferred (`last_value` attributes may be attached).
* Made the generated parsers compilable in void-safe mode with ISE 7.3.
* Added option `--rescue-on-abort` to generate a rescue clause in action 
  routines to catch abort exceptions. Useful when compiling in void-safe mode.
* Added option `--array-size` and changed the default maximum size for 
  manifest arrays to be 200.
* Fixed generation of manifest arrays when the size of the generated table
  is a multiple of the maximum array size.
* Moved the code/doc/examples/tests to `$GOBO/tool/geyacc`.
	
### Gobo Eiffel Argument Library

* Made it compilable in void-safe mode with ISE 13.11.
* Made the parameter of boolean options possibly optional.
* Moved the doc/examples/tests to `$GOBO/library/argument`.


### Gobo Eiffel Kernel Library

* Added features `same_*_pathnames` to class `KI_FILE_SYSTEM`.
* Features `test` in class `KL_EQUALITY_TESTER` and `equal_objects` in
  class `KL_ANY_ROUTINES` now use the new ECMA construct `~` instead
  of the combination `same_type` and then `is_equal`.
* Added feature `is_true` to class KL_AGENT_ROUTINES.
* Fixed bug in feature `read_to_string` of file classes where the
  hash code was not reset properly.
* Made it compilable in void-safe mode with ISE 7.3.
* `KL_FILE.copy_file`: now uses 8192 blocks, instead of 512.
* Fixed bug in `UC_STRING.replace_substring_all`.
* Moved the doc/examples/tests to `$GOBO/library/kernel`.

### Gobo Eiffel Lexical Library

* Fixed bug in `LX_DFA_REGULAR_EXPRESSION` where `compile ("foo\$")` was
  setting `has_dollar` to True even though the dollar sign was escaped.
* Added features `pattern` and `is_case_insensitive` in class `LX_PATTERN_MATCHER`.
* Made it compilable in void-safe mode with ISE 7.3.
* Moved the doc/examples/tests to `$GOBO/library/lexical`.

### Gobo Eiffel Math Library

* Made it compilable in void-safe mode with ISE 7.3.
* Moved the doc/examples/tests to `$GOBO/library/math`.

### Gobo Eiffel Parse Library

* Made it compilable in void-safe mode with ISE 7.3.
* Moved the doc/examples/tests to `$GOBO/library/parse`.

### Gobo Eiffel Pattern Library

* Made it compilable in void-safe mode with ISE 7.3.
* Moved the doc/examples/tests to `$GOBO/library/pattern`.

### Gobo Eiffel Regexp Library

* The pattern being matched and the case-sensitiveness are now
  available using queries `pattern` and `is_case_insensitive`.
* Made it compilable in void-safe mode with ISE 7.3.
* Moved the doc/examples/tests to `$GOBO/library/regexp`.

### Gobo Eiffel String Library

* Fixed bug in the string formatter where the flags `+` and
  space where not taken into account. See bug#2768748.
* Made it compilable in void-safe mode with ISE 7.3.
* Moved the doc/examples/tests to `$GOBO/library/string`.

### Gobo Eiffel Structure Library

* Fixed assertion violation in feature `compress` from `DS_SPARSE_CONTAINER`.
  See bug#2831433.
* Relaxed precondition of `put` and `put_last` in classes `DS_SET` and
  `DS_SPARSE_TABLE` (i.e. the ancestors of `DS_HASH_SET` and `DS_HASH_TABLE`)
  to be `not is_full or else has (k)` instead of just `not is_full`.
* Added features `do_until` and `do_if_until` to `DS_CONTAINER` and its
  descendants.
* Added feature `has_void` to `DS_CELL` and `DS_PAIR`.
* Fixed bug in features `force_last_new` and `put_last_new` of `DS_HASH_TABLE`.
* Fixed bug in `DS_HASH_TABLE` when the calls to `key_equality_tester` in
  `search_position` trigger the invariant which internally calls `search_position`.
   But this routine was not written to be re-entrant.
* Added iteration routines to the descendants of `DS_TABLE` so that the key can be
  passed first and then the item to the agents.
* Made it compilable in void-safe mode with ISE 7.3.
* Added support for the `across` Eiffel construct.
* Moved the doc/examples/tests to `$GOBO/library/structure`.

### Gobo Eiffel Test Library

* Made it compilable in void-safe mode with ISE 15.01.
* Moved the doc/examples/tests to `$GOBO/library/test`.
* Added test case assertion routines in `TS_ASSERTION_ROUTINES`
  to check whether an exception has been raised or not when
  executing a given agent.

### Gobo Eiffel Time Library

* Added class `DT_STOPWATCH` in cluster `stopwatch`.
* Made it compilable in void-safe mode with ISE 7.3.
* Moved the doc/examples/tests to `$GOBO/library/time`.

### Gobo Eiffel Tools Library

* Added support for keyword `note` as a replacement of `indexing`.
  See bug#2499770.
* Fixed bug where object-test local was not recognized as such when
  appearing as target of an agent declaration.
* Fixed bug where the type of an agent was not correctly determined
  when the result type of the corresponding function contained a formal
  generic parameter. It ended up being `FUNCTION [ANY, TUPLE, BOOLEAN]`
  instead of `PREDICATE [ANY, TUPLE]`. See bug#2667604.
* Only pre-ECMA formats were supported for integer manifest constants.
  Now all formats (decimal, hexadecimal, octal and binary) are supported
  to be compliant with ECMA and ISE. See bug#2682414.
* Support the new syntax, using keywords, for attached and detachable
  types (e.g. `attached FOO` or `detachable BAR`) and for object-tests
  (e.g. `attached {T} exp as x` with `{T}` and `x` optional). See
  bug#2682694.
* Added the notion of ignored classes. We can programmatically decide
  to ignore the class from a cluster and take it into account later on
  after some processing.
* Added support for attribute initialization body.
* Added support for renaming clause in libraries when parsing ECF files.
* Fixed pretty-printer when processing indexing clauses in features.
  An extra empty line was inserted.
* Added support for `check` instructions with a `then` branch.
* Added support for `once` keys in once routines.
* Improved the way the type of a manifest array is determined in the
  case where the types of all items conform to one of them. In that
  case the manifest array will be an array of that type.
* The scope of object-test locals can cover the following assertions
  in the same postcondition or invariant clause because it's as if
  they were separated by `and then` operators. It was already
  implemented that way in preconditions.
* Support the ECMA syntax for typed manifest strings and typed character
  constants.
* Accept class text files which start with the byte order mark (BOM).
  (See [http://en.wikipedia.org/wiki/Byte_order_mark](http://en.wikipedia.org/wiki/Byte_order_mark).)
* Started checking void-safety validity rules.
* Relaxed the validity rule to prevent cycles in qualified anchored types
  so that it can accept code appearing in ISE's libraries.
* Added support for `across` instructions/expressions.
* Added support for `alias "()"`.
* Added support for `$(ECF_CONFIG_PATH)` in ECF files.
* Made it compilable in void-safe mode with ISE 15.01.
* Moved the doc/examples/tests to `$GOBO/library/tools`.

### Gobo Eiffel Utility Library

* Made it compilable in void-safe mode with ISE 7.3.
* Moved the doc/examples/tests to `$GOBO/library/utility`.

### Gobo Eiffel XML Library

* Added option to let the XML pretty printer use empty element tags
  `<tag/>` instead of `<tag><tag/>`.
* Made it compilable in void-safe mode with ISE 15.01.
* Splitted the library in three: `$GOBO/library/xml`,
  `$GOBO/library/xpath` and `$GOBO/library/xslt`
* Moved the doc/examples/tests to their new library folders.

### Miscellaneous:

* Removed classes and features that had been marked as obsolete
  in 2004 or before.
* Removed warnings when compiling with ISE 6.6.
* Removed warnings when compiling with ISE 16.11.
* Converted Readme files to Markdown to be Github-friendly.

## Version 3.9 - 20 November 2008

### geant

* Removed support for SmartEiffel task `<se>`.

### gec

* Fixed some C compilation warnings when using `gcc` as back-end C compiler.
  See bug#1961462.
* Added support for object equality (`~` and `/~`). Equality expressions
  (`=` and `/=`) now use the semantics of object equality when the operands
  are dynamically of expanded types.
* Added experimental support for Qualified Anchored Types (types of the
  form `like a.b` or `like {A}.b`).

### gelint

* Fixed bug where no validity error was reported when a creation procedure
  of a creation instruction did not exist in the base class of the creation
  type.

### getest

* Added an indexing clause `generator` to the generated classes.
  See feature request bug#1961466.
* Provided programmatic access to test results.
* Removed support for config file `getest.se` and option `--se`.

### gexace

* Made sure that several options `override_cluster` can be specified
  in Xace files.
* Fixed bug when generating ECF files from Xace files: the override
  clusters were not marked as such.
* Removed support for SmartEiffel config files.

### Gobo Eiffel Kernel Library

* Added `make_from_string_general` and `make_from_substring_general`
  in class `UC_STRING`.

### Gobo Eiffel Structure Library

* Added set and table classes using binary search tree, AVL tree,
  red-black tree and left-leaning red-black tree algorithms.
* Added features `there_exists_with_key` and `for_all_with_key` to class
  `DS_TABLE`.

### Gobo Eiffel Tools Library

* Added minimal support for ECF files.
* Improved Eiffel pretty-printer.

### Miscellaneous

* Removed the emulations of EiffelBase and EiffelTime in `library/other`.
  They had not been maintained for years, and it became a pain to use
  them after the move from Ace files to ECF files in EiffelStudio.

## Version 3.8 - 11 May 2008

### geant

* Changed the evaluation of attributes `if` and `unless` so that an
  empty right/left side of the equals sign is treated as an empty string
  which makes comparisons easier. Also leading/trailing white space for
  the equals sign is not removed anymore to leave control to the script
  developer. Note that this might cause a problem to scripts which made
  use of the old behavior. These scripts need to be adapted.
* Task `geant` has a new attribute called `exit_code_variable`. It can be
  used to capture (or ignore) the execution result of a `<geant>` call
  and works exactly as in the `exec` task.
* Introduced notion of locals, and globals. You can now declare
  `<local name="varname"/>`.
* Added support for `<group>` element.
* Fixed various issue with `<replace>` task.

### gec

* Generate prototypes for external routines when no header file
  has been specified.
* Changed the generated C code for Agent objects so that `twin`
  and `deep_twin` work correctly.
* Improved CAT-call error reporting, in particular in case of
  Tuple label assigners.
* Relaxed the CAT-call rule when calling Agents to be compliant with ISE.
  ISE Eiffel does not type-check the tuple operand of Agent calls even at
  execution time. It only checks whether the tuple has enough items and
  these items are of the expected types, regardless of the type of the
  tuple itself. For example it is OK to pass a `TUPLE [ANY]` to an Agent
  which expects a `TUPLE [STRING]` provided that the dynamic type of the
  item of this tuple conforms to type `STRING`.
* Made sure that no-more-memory exceptions are raised when needed.
* Made sure that expanded items are initialized when creating objects
  of type `SPECIAL`.
* Fixed bug (read/write to non-allocated memory) in implementation of
  `deep_twin` when traversing objects of type `SPECIAL`.
* Fixed bug when both the expanded and reference versions of a non-generic
  type were used in the system. The generated C code considered that they
  were either both expanded or both reference.
* Fixed bug in recursive once-functions. The second call was returning
  the default value of the result type instead of the value of `Result`
  as it was when the recursive call occurred, as specified in ECMA Eiffel.
* The Xace option `garbage_collector` is now taken into account by `gec`
  when set to `boehm`. This Xace option can be overridden by the
  command-line option `--gc` when specified.
* When `gec` compiles an application with the Boehm GC, it now generates
  code that will let the GC trigger the feature `dispose` when objects
  are reclaimed.
* Take better advantage of the Boehm GC, using `GC_malloc_atomic` when
  possible.
* The implememtation of the rescue mechanism in C uses `setjmp` and
  `longjmp`. The use of these two C functions requires that any local
  variable modified between the call to `setjmp` and the call to `longjmp`
  to be declared as `volatile`, otherwise its value may be lost after
  calling `longjmp` if the C optimizer decided to implement it with
  `register`. For more details, see:

  * [http://www.programmersheaven.com/articles/pathak/article1.htm](http://www.programmersheaven.com/articles/pathak/article1.htm)
  * [http://www.freetype.org/david/reliable-c.html#annex-A](http://www.freetype.org/david/reliable-c.html#annex-A)
  * [http://msdn2.microsoft.com/en-us/library/xe7acxfb(VS.80).aspx](http://msdn2.microsoft.com/en-us/library/xe7acxfb(VS.80).aspx)

    The generated C code has been adapted accordingly.

### gelint

* Fixed bug in the flat Degree 3 mode where the precursor features
  corresponding to precursor expressions or instructions were not checked.
* Fixed bug when the type in a manifest type is based on an unknown class.
  Instead of reporting a `VTCT` error, `gelint`/`gec` were reporting another
  subsequent error, as shown in bug#1875262.
* Made sure that no `VAPE` error is reported when a feature is exported
  to a class that has a syntax error or for which the ancestors could
  not be computed.
* Added support for the notion of libraries as specified in ECF.
  This introduced some breaking changes if you are using the code of
  `gelint` in your own applications. For example what was known as
  `ET_UNIVERSE` is now called `ET_SYSTEM` and `ET_UNIVERSE` is now an
  ancestor of this class (and of the new class `ET_LIBRARY`).
* Added type-marks `!` and `?` (part of void-safety mechanism) in the
  parser. But do not check validity rules yet.
* Implemented Object-Test as specified in ECMA 367-2.
* Do not accept the obsolete syntax for Agents using `~`. ECMA Eiffel
  uses the operator for object equality, and this new construct is
  now implemented in ISE 6.2.

### getest

* Added features `assert_doubles_equal_with_tolerance` and
  `assert_doubles_equal_with_strict_tolerance` to `TS_ASSERTION_ROUTINES`.
* `getest` now expects test case classes to declare `make_default` inherited
  from `TS_TEST_CASE` as creation procedure. That way there is no need to
  generate intermediary classes (e.g. classes of the form `XTEST_...`
  inheriting from `TEST_...`) anymore, and hence it is easier to call test
  cases outside of the test framework.
* Removed the command-line option `--ve` and replaced it by `--ge`.
* Print the exception trace if available when an exception occurred
  while running a test case.
* Make sure that the garbage collector is in the same state as before
  running each test case.

### gexace

* The option `--system=ise` now generates ECF directly instead of going
  through Ace which is then converted to ECF by EiffelStudio. This
  allow Xace to support options that have been introduced in ECF. In
  order to generate Ace files for ISE, use the new command-line option
  `--format=ace`.
* The option `--system=ge` now generates an Xace file instead of an
  Ace file. This makes it possible for example for `gec` to determine
  whether the Boehm GC should be used through the Xace option
  `garbage_collector`. Otherwise, with Ace files, this information has
  to be passed to `gec` through the command-line option `--gc=boehm`.
  In order to generate Ace files for `gec`, use the new command-line
  option `--format=ace`.
* These ECF options have been added to Xace: `supplier_precondition`,
  `automatic_backup`, `check_generic_creation_constraint`, `ecf_library`,
  `enforce_unique_class_names`, `external_runtime`, `force_32bits`,
  `full_class_checking`, `msil_classes_per_module`, `msil_culture`,
  `msil_key_file_name`, `msil_use_optimized_precompile`, `namespace`,
  `old_verbatim_strings`. See `$GOBO/doc/gexace/options.txt` for more
  details.
* The default value of these Xace options has been changed to follow
  the default value in ECF: `inlining`, `inlining_size`,
  `use_cluster_name_as_namespace`, `use_full_cluster_name_as_namespace`.
  See `$GOBO/doc/gexace/options.txt` for more details.
* Fixed bug#1875809 where libraries were duplicated in the generated
  output file when appearing twice in the same Xace input file.

### geyacc

* Fixed bug when resuming a parsing that was suspended (with `suspend`).
  The last action before the call to `suspend` was executed twice.

### Gobo Eiffel Kernel Library

* Added iterator features (`do_all`, `do_if`, `for_all`, `there_exists`)
  in class `KL_DIRECTORY`.
* Added feature `prune_all_trailing` to `KL_STRING_ROUTINES`.
* Improved class `KL_EXCEPTIONS` to make it clearer what is available
  for all Eiffel compilers and what is not.
* Added `KL_MEMORY` and friends to provide a compiler independent way
  to access garbage collection facilities.
* Upgraded Unicode support to version 5.1.0.

### Gobo Eiffel Regexp Library

* Fixed bug#1917556 where feature `split` in `RX_PCRE_REGULAR_EXPRESSION`
  was not behaving correctly when the regexp could match empty strings.

### Gobo Eiffel String Library

* Added full Unicode case-mapping routines.
* Upgraded Unicode support to version 5.1.0.
* Added support for formatting dates and times according
  using the picture strings from the XSLT functions
  `format-date()`, `format-time()` and `format-date-time()`.

### Gobo Eiffel Structure Library

* Moved features `do_all`, `do_if`, `there_exists` and `for_all`
  up to class `DS_CONTAINER`.
* Added features `do_all_with_key` and `do_if_with_key` to class
  `DS_TABLE`.
* Added feature `has_void` to class `DS_SEARCHABLE`.

### Gobo Eiffel XML Library

* Re-implemented XPath `fn:collection()` for file URIs (incompatibly,
  but as the previous implementation was not documented, it
  almost certainly is not used). Wrote documentation.
* Added additional XSLT system-properties, and the ability to
  register additional system properties. Documented this.
* Added facility to pass XPath values as global XSLT parameter values.

## Version 3.7 - 5 November 2007

### gec

* Can generate console and Windows applications.
* Implemented once manifest strings.
* Report CAT-call errors and call-on-void-target errors at run-time.
* Support the Ace/Xace/ECF `trace` option.
* The Boehm GC can be plugged using the `--gc` command-line option.
* Improved the back-end C compiler config file.
* Improved interoperability with ISE's compiler.
* Support `external "C++"` routines.
* Implemented feature `deep_twin`.
* Added support for lcc-win32 and MinGW as back-end C compilers.

### gelint

* Fixed bug when determining the type of a call to a Tuple label
  when appearing in a generic class.
* Added support for some incrementality when used within the same session.

### Gobo Eiffel Argument Library

* Added the possibility to specify a maximum number of options.
* Added the possibility to make option arguments optional for options
  that only have a long form.
* The contracts now certify that the setup of arguments are
  unambiguous.

### Gobo Eiffel Kernel Library

* Removed possible CAT-call when using `KL_EQUALITY_TESTER`. It does not
  use `is_equal` directly, but a protected version of it which is preceded
  by a call to `same_type`.

### Gobo Eiffel XML Library

* Made the XSLT serializer a reusable component for any XML programs.
* Added an example of using the XSLT serializer.
* Added documentation on XML serializers, including the reusable
  XSLT serializer.

## Version 3.6 - 14 June 2007

### gec

* Implemented inline agents.

### Gobo Eiffel String Library

* Fixed a bug in string formatter where `format ("$11.9f", 941.65899999999817)`
  would return `942.589999910` instead of `941.659000000`. Regression tests
  have been added, and this fix also pointed out a bug in one of the
  test cases.

### Gobo Eiffel Structure Library

* Added iterator features (`do_all`, `do_all_with_index`, `do_if`,
  `do_if_with_index`, `there_exists`) to relevant classes.
* Fixed bug in invariant of `DS_MULTIARRAYED_SPARSE_SET` and
  `DS_MULTIARRAYED_SPARSE_TABLE` when `capacity` is zero.

### Miscellaneous

* Now uses the MIT License, which is an OSI Approved License and
  a GPL-Compatible Free Software License.
* Bugs can now be reported on SourceForge bug tracker.
* Does not support Visual Eiffel compiler anymore. Indeed Visual Eiffel
  does not support Agents, Tuples, `INTEGER_64` among other things. The
  Gobo project tried not to use these constructs so far, but this is
  becoming too constraining.

## Version 3.5 - 23 January 2007

### geant

* Fixed bugs which prevented that possible arguments of a target
  to be taken into account during evaluation of `${somevar}` references.
  This was especially the case for the attributes `if` and `unless`.
* Task `<geant>` now by default spawns a new `geant` process if
  attribute `file` has been specified. It also has a new attribute
  called `fork` to control whether a new process should be spawned
  or not.
* Added attribute `force` to task `<xslt>`. Use this attribute to
  generate output that already exists and is newer than the input.
* Added task `<input>` to get input values.
* Added task `<replace>` to replace tokens or patterns in a file.

### gec

* First version of the Gobo Eiffel Compiler (`gec`) that is able to
  compile everything in the Gobo package. However `gec` is not a
  full-fledged Eiffel compiler yet. See the documentation for more
  details.

### getest

* Added command-line option `--default_test` to specify whether the
  feature `default_test` should be included in the generated test
  cases.

### gexmlsplit

* Has been removed. Use `gexslt` instead.

### Gobo Eiffel Argument Library

* New command-line argument parsing library.

### Gobo Eiffel Kernel Library

* `KL_WINDOWS_FILE_SYSTEM` now accepts both `\` and `/` as directory
  separator. This is the default. It can still accept only `\`
  as directory separator if you use the `make_backslash_only`
  creation procedure.
* Change semantics of `KI_FILE_SYSTEM.absolute_parent_pathname` when
  the argument is both a root directory (i.e. has no parent) and an
  absolute pathname. In that case return the argument itself instead
  of `absolute_root_directory` as before.
* Fixed bug in `KL_(UNIX|WINDOWS)_FILE_SYSTEM.absolute_parent_pathname`.
  When the result was a root directory it was erroneously returning
  `absolute_root_directory`. So if you were in `C:\gobo` and asked for
  the `absolute_parent_pathname` of `D:\foo` you were getting `C:\`
  instead of the expected `D:\`.
* Fixed bug in `KL_WINDOWS_FILE_SYSTEM.canonical_pathname` which for the
  input `\\gobo\foo\..` was returning the invalid pathname `\\gobo\`
  instead of `\\gobo\foo`. Likewise for `c:\..`, we were getting
  `c:\..` instead of `c:\`.
* Added `sharename` to `KI_PATHNAME`, so that UNC pathnames can be
  split into `\\hostname\sharename`.
* Added classes for determining the class of Unicode
  characters. Also updated code for conversion to lower and
  upper case, and added code for conversion to title case.
  These are generated from the Unicode Character Database.
  Currently Unicode version 5.0.0 is supported.
* New features have been added to a new ancestor of ISE's STRING
  class in order to support the classes `STRING_32` and `STRING_8`
  which have been introduced at ECMA. As a consequence, the
  following features had to be renamed in class `UC_STRING`:

  * put_code -> put_item_code
  * append_code -> append_item_code
  * has_code -> has_item_code
  * index_of_code -> index_of_item_code

    The new names are not great, but they match the feature `item_code`.

### Gobo Eiffel Math/Decimal Library

* Added creation procedure `make` to `MA_DECIMAL_TEXT_PARSER` and
  `MA_DECIMAL_BCD_PARSER`.
* Renamed `MA_DECIMAL_CONSTANTS` as `MA_DECIMAL_CONTEXT_CONSTANTS` and
  `MA_DECIMAL_MATH` as `MA_DECIMAL_CONSTANTS`.
* Added class `MA_SHARED_DECIMAL_CONSTANTS`.
* Moved `Maximum_integer_as_decimal` and `Minimum_integer_as_decimal`
  from `MA_DECIMAL_CONTEXT_CONSTANTS` to `MA_DECIMAL_CONSTANTS` and
  renamed them as `maximum_integer` and `minimum_integer`.
* Moved `default_context` from `MA_DECIMAL_CONTEXT` to `MA_SHARED_DECIMAL_CONTEXT`.
* Added a comment in `MA_SHARED_DECIMAL_CONTEXT.set_shared_decimal_context`
  emphasizing the fact that it is best practice to call this routine
  once and for all at the beginning of the application to avoid unexpected
  behaviors.

### Gobo Eiffel Parse Library

* Added feature `suspend` (and its associated feature `is_suspended`)
  to `YY_PARSER` and its descendant `YY_PARSER_SKELETON` to be able to
  suspend the current parsing. The next call to `parse` will resume
  parsing in the state where the parser was when it was suspended.
  Note that a call to `abort` or `accept` will force `parse` to parse
  from scratch.
* Changed implementation of feature `syntax_error` in `YY_PARSER_SKELETON`
  so that it returns false when nothing has been parsed yet.

### Gobo Eiffel String Library

* Added classes for normalizing Unicode strings.
* Removed useless precondition of feature `make_with_separators`
  in `ST_SPLITTER`.

### Gobo Eiffel Time Library

* Added classes to parse and format XML Schema date, time and
  date-time datatypes.

### Gobo Eiffel XML Library

* XSLT and XPointer are now sufficiently stable and mature to be
  considered supported. XPath is supported for its use with
  XSLT and XPointer as host languages, but a general interface
  for host languages is not yet supported.

## Version 3.4 - 10 July 2005

### geant

* Task `<echo>` supports writing message to a file.
* Targets support argument handling. Tasks `<geant>` and `<precursor>`
  have been modified so that they are able to pass these arguments.
* Targets support `obsolete` mechanism.
* Tasks `<exit>`, `<ise>`, `<se>`, `<ve>` support capturing the return code
  of the called process.
* Task `<available>` supports checking for availablity of directories.
* If you use `xsltproc` and pass string parameters to it, you have to
  surround those parameters with single quotes now.
* Task `<ve>` supports VE 5.0 with the attribute `xace` to specify
  Xace files. Attribute `esd` is still supported when using VE 4.1.
* Added built-in variable `verbose` which is set (to `true`) when
  `geant` is run in verbose mode.
* Added attributes `verbose`, `abort`, `generation`, `compilation`
  and `execution` to task `<getest>`.

### gexace

* Removed support for `hact`.
* Added support for VE 5.0: `ve` now generates Xace files for VE 5.0.
  In order to generate ESD for VE 4.1 use `ve41` instead.

### gelex

* Added command-line option `--pragma=[no]line` in order for
  the code generated for the semantic actions to contain or
  not indication about the line number where it originally
  appeared in the input description file.
* Fixed bug in `%option line` with the `-z` option when two rules
  were sharing the same semantic actions (with `|` separator).
* When not appearing in a character class, an unescaped `[` character
  is now considered to be the open character of a character class
  and reports an error if there is no matching `]` character. It used
  to be considered as a non-special character when there was no
  matching `]` character.

### geyacc

* Following the changes made in version 3.2, `YY_PARSER_SKELETON` is
  not a synonym of `YY_OLD_PARSER_SKELETON` anymore and can now be
  used as a replacement of `YY_NEW_PARSER_SKELETON`. Also the default
  command-line option is now `--new_typing`.
* Added command-line option `--pragma=[no]line` in order for
  the code generated for the semantic actions to contain or
  not indication about the line number where it originally
  appeared in the input description file.
* Added command-line option `--doc=(html|xml)` to generate
  documentation about the grammar in HTML or XML format.

### getest

* Added command-line options `--verbose` and `-v` to run
  `getest` in verbose mode.
* In verbose mode `getest` prints the number of test cases
  that have been generated.

### Gobo Eiffel XML Library

* `XM_DOCUMENT.process_to_events` makes the tree an event source.
* New `XM_XMLNS_GENERATOR` filter injects xmlns declarations
  in event stream. It can be combined with a print filter.
* `XM_FORMATTER` is now a wrapper for the above and so
  produces XML compliant output.
* `XM_INDENT_PRETTY_PRINT_FILTER` and `XM_WHITESPACE_NORMALIZER`
  added to allow pretty indented output.
* `XM_NAMESPACE_RESOLVER` has new option to forward
  xmlns attribute events (`forward_xmlns`).
* `XM_DTD_CALLBACKS`: `on_doctype` called first; `on_dtd_end`,
  `on_dtd_comment`, `on_dtd_processing_instruction` added.
* New `XM_XMLID_VALIDATOR` validates `xml:id` attributes.
* Parser defaults to new STRING-only `latin-1` mode.
* Parser correctly outputs `PUBLIC` identifier in `DOCTYPE`.
* Parser leaves XML resolver in correct state.
* `XM_PARSER.positions` contains full info to locate errors
  in external entities.
* Eiffel parser accepts UTF8 files that start with a BOM.
* Expat parser accepts genuine `UC_STRING`s as input.

### Gobo Eiffel Kernel Library

* Fixed bug in `KL_PATHNAME.set_canonical`.
* Added bit operation features to `KL_INTEGER_ROUTINES`.
* Added features `power`, `div` and `mod` to `KL_INTEGER_ROUTINES`.
* Added feature `log2` to `KL_DOUBLE_ROUTINES`.
* Added feature `truncated_to_integer` to `KL_DOUBLE_ROUTINES` because
  this routine is not supported anymore in SE 2.2b1.
* Added class `KL_CLONABLE`. This class should be used whenever
  the corresponding objects need to be cloned. This is the
  consequence of `clone` not being supported anymore in SE 2.2b1.
  If you need to clone strings or arrays, use `cloned_string`
  by inheriting from `KL_IMPORTED_STRING_ROUTINES` and `cloned_array`
  by inheriting from `KL_IMPORTED_ARRAY_ROUTINES`. To a clone a
  SPECIAL object, just call `twin` on it (does not work with
  ISE 5.4, but works with ISE 5.5).
* `KL_PLATFORM.Double_bit`s is not supported with SE 2.1 and 2.2b1
  anymore. This is a consequence of `DOUBLE` being deprecated in
  SmartEiffel and hence not supporting the required features.
* `UC_STRING.infix "@"` does not work as expected with SE 2.1. It
  works well with the SE 2.2b and SE 1.0 though. This is the
  consequence of the fact that `STRING.infix "@"` as been marked
  as frozen in SE 2.2b1.

### Gobo Eiffel Math/Decimal Library

* New library, incorporated from the SAFE project
  ([http://safe.sf.net](http://safe.sf.net)).
* Contains `MA_DECIMAL`, which provides Decimal floating-point arithmetic,
  with unrounded and integer arithmetic as a subset
  (IEEE 754R + IEEE 854 + ANSI X3.274 + ECMA 334).

### Gobo Eiffel String Library

* New library.
* Contains the Formatter Library (note that unlike the imported
  library, the array-based formatter requires `DS_CEL`L items for
  basic types, rather than accepting the `_REF` types).
* `ST_SPLITTER`: parse a string to and from lists of tokens.

### Gobo Eiffel Time Library

* Support clocks with precision to the millisecond. However
  note that with SmartEiffel under Windows the millisecond part
  may be stuck to zero.
* Better support for days of the week.
* Added support of week number of dates.

### Gobo Eiffel Utility Library

* `UT_URI` path is parsed into components: `path_items`.
* `UT_HOST_PORT`: new class for TCP hostname and port number.

## Version 3.3 - 2 November 2003

### geant

* Fixed bug in task `<gepp>` occurring when a nested `<fileset>`
  element defined in the new format was specified.

### Gobo Eiffel XML Library

* `XM_EIFFEL_PARSER.disable_namespaces` allows multiple
  colons in names (strict XML compliance).

### Gobo Eiffel Kernel Library

* Removed usage of `like argument` (will be removed from the
  Eiffel language because it was a disguised way of providing
  overloading in Eiffel) in features `substring`, `to_lower`,
  `to_upper`, `as_lower` and `as_upper` in `KL_STRING_ROUTINES`.

## Version 3.2 - 29 June 2003

### geant

* Element `<fileset>` uses a new format. The old format is
  still working but an obsolete-message will be shown when applied.
* Added optional attribute 'export' which takes a comma separated
  list of project names to which the given target is exported.
* Added new command-line option `-t` (`--targets`) to list targets
  and their descriptions.
* Added new task `<available>`.
* Added subelement `<directoryset>` to task `<delete>`.
* Added attributes `class` and `feature` to task `<getest>`.
* The task `<hact>` now takes advantage of Halstenbach incremental
  compiler.
* Added attributes `old_typing` and `new_typing` to task `<geyacc>`.

### geyacc

* Made the semantic values more type-safe. Now the parser
  skeleton class is not generic anymore, and there is one
  different stack generated per declared type in the %type
  or `%token` clauses. `geyacc` also generates the corresponding
  attributes `last_<type>_value` instead of `last_value`
  to be used to set the semantic values of tokens.
  Transition path: If you still want to use the old typing
  mechanism (now made obsolete), use `geyacc` with the 
  command-line option `--old_typing` or with `geant`'s attribute
  `old_typing` in task `<geyacc>`. It is also recommended that you replace
  class `YY_PARSER_SKELETON` by `YY_OLD_PARSER_SKELETON` in your
  code. Alternatively you can now switch to the new typing
  mechanism using `geyacc`'s `--new_typing` command-line option
  or attribute `new_typing` in task `<geyacc>` in `geant`. In
  that case you will have to use the non-generic class
  `YY_NEW_PARSER_SKELETON` instead of `YY_PARSER_SKELETON` and
  replace the calls to `last_value` by the corresponding
  `last_<type>_value` in your code. In the next release
  `YY_PARSER_SKELETON` will stop to be a synonym of
  `YY_OLD_PARSER_SKELETON` and will be used as a replacement
  of `YY_NEW_PARSER_SKELETON`. In the release after, the old
  typing mechanism will not be supported anymore, classes
  `YY_OLD_PARSER_SKELETON` and `YY_NEW_PARSER_SKELETON` will be
  removed, and you will have to use `YY_PARSER_SKELETON` along
  with the `last_<type>_value` attributes in your code.

### getest

* Added command-line options `--class` and `--feature` to pass
  the regexps for tested class names and feature names as
  argument instead of through the `class` and `feature`
  fields of the config file (needed by Guy Fokou).
* Better formatting of the message when `assert_equal` or
  `assert_not_equal` fail (suggested by Berend de Boer).

### Gobo Eiffel Lexical Library

* Renamed `convert` as `convert_to_equivalence` in class
  `LX_SYMBOL_CLASS` because `convert` is a keyword in ETL3.

### Gobo Eiffel Tools Library

* Big chunks have been redesigned. Still under development.

### Gobo Eiffel XML Library

* Eiffel parser now accepts `iso-8859-1` encoding.
* Tree formatter now produces valid XML.
* Tree node parent not void (when not the root node) implemented
  where missing and creation procedures updated accordingly. Also
  for the root element, so that `root_node` returns the real
  root (`XM_DOCUMENT`). `XM_NODE.level` consequently offset by `1`.
* `XM_COMPOSITE` now a read-only list. Modification routines
  are in `XM_ELEMENT` and `XM_DOCUMENT` (typing is used to allow
  only the correct node types to be added).
* `XM_COMPOSITE` descendants' modification routines remove
  a node from its previous parent if any. They also have
  `make_last` creation routines that add the node to the
  composite. `make_last` is faster than `make`, `force_last`.
* `XM_NODE.parent_element` added, `root_node` now `XM_DOCUMENT`.
* `XM_NAMESPACE` stricter contracts and `uri` invariant,
  `is_default` replaced by `not has_prefix`, removed rather
  than obsoleted due to SmartEiffel's `ANY` using the name.
* `XM_DOCUMENT.set_root_element` now exported to `ANY`.
* `XM_NAMESPACE_RESOLVER` now issues empty strings (the default
  namespace) rather than the parent element's namespace for
  `on_attribute` events in the case of unprefixed attributes.
  (XML Names says unprefixed attributes have no namespace.)
* `XM_ELEMENT.*attribute_by_name` only look for unprefixed
  attributes, for the same reason as above.
* Added `_by_qualified_name` routines to tree nodes.
* `XM_FORMATTER.last_string` replaced by `.last_output_stream`.
* `XM_NODE_TYPER.attribute` obsoleted and renamed to `xml_attribute`
  to avoid future keyword collision.

### Miscellaneous

* Now uses the Eiffel Forum License version 2, which is an OSI
  Approved License and a GPL-Compatible, Free Software License.
* Does not support Halstenbach compiler anymore. Indeed Halstenbach
  does not seem to maintain/release their Eiffel compiler on their
  Web site anymore and a poll among the Gobo users has shown that
  it was not worth the effort to continue supporting this out-of-date
  compiler in Gobo.

## Version 3.1 - 18 December 2002

### gelex

* Feature `YY_BUFFER.content` is now of type `KI_CHARACTER_BUFFER`
  instead of `KL_CHARACTER_BUFFER` (Berend de Boer).

### geant

* The task `<ise>` now takes advantage of ISE Eiffel incremental
  compiler.

### getest

* Fixed bug: only the first cluster listed in the config file
  was taken into account (reported by Guy Fokou).

### Gobo Eiffel Kernel Library

* Moved feature `close` up to `KI_INPUT_STREAM` and
  `KI_OUTPUT_STREAM` and added feature `is_closable`
  (suggested by Franck Arnaud).
* Made sure that `hash_code` in `UC_STRING` returns the same value
  when `same_string` returns true.

### Gobo Eiffel Lexical Library

* `LX_NFA`: Renamed `infix "|{n,}|"` as `infix "|{*}|"` and `infix "|{n}|"`
  as `infix "|{}|"` because the former free operator is not valid in ETL3
  anymore (and SE 1.0b6 already supports the new syntax). All the free
  operators of this class have been made obsolete.

### Gobo Eiffel Time Library

* `DT_DATE`: Renamed `infix "&d"` as `infix "&@"` because the former
  free operator is not valid in ETL3 anymore (and SE 1.0b6 already
  supports the new syntax).
* `DT_TIME`: Renamed `infix "&t"` as `infix "&|"` because the former
  free operator is not valid in ETL3 anymore (and SE 1.0b6 already
  supports the new syntax).

### Gobo Eiffel XML Library

* Tree: `namespace` in named nodes is now an object, which
  contains URI and prefix. It may be shared.
* Tree: `*_by_name` routines check the namespace is the same.
* Tree: `is_first` and `is_last` in `XM_COMPOSITE` for
  checking position within parent.
* Tree: added `elements` to `XM_COMPOSITE`.

## Version 3.0 - 1 September 2002

### gelex

* Added feature `wipe_out` to `YY_BUFFER` and `YY_FILE_BUFFER`,
  which is useful in order to avoid invariant violation when
  reusing the same input buffer for subsequent scanning.
  (suggested by Emmanuel Stapf)
* Options specified on the command-line now override those
  specified in the `%option` directives of the input file
  (reported by Sven Ehrke).

### geyacc

* Added command-line options `-k` and `--tokens-file`: name
  of the file where the tokens class will be written
  (reported by Sven Ehrke).
* Do not generate unused local variables anymore.
* Do not generate unused `$N` type conversion routines, nor
  conversion routines for the generic parameters of these
  types. This caused Eiffel compilation errors when the
  generic parameter was a formal generic parameter
  (reported by Zoran Simic).
* Fixed bug in default rule when the declared type is a basic
  expanded type. For example when the declared type in the
  `%type` section was `INTEGER`, the default rule was trying to
  set `$$` to `Void` instead of `0` (reported by Emmanuel Stapf).

### getest

* Added command-line options: `-g` for testcase generation
  only, `-c` for testcase compilation only, and `-e` for
  testcase execution only (suggested by Glenn Maughan).
* Added assertion routines to compare file contents and
  filenames.
* Added command-line option `--compile` to pass the
  Eiffel compilation command-line as argument instead of
  through the `compile` field of the config file.
* Added command-line options `-D` and `--define` to define
  variables which will be passed to the command running
  the test cases.
* The `testgen` directory is now created by `getest` if
  it does not exist yet.
* Do not try to run the test anymore when the command
  specified for the Eiffel compilation exits with a
  status code other than zero.

### gepp

* Added command-line options `--lines` and `-l` in order to
  generate empty lines whenever lines are ignored from
  the input file. That way line numbers are preserved.
  (suggested by Alexander Kogtenkov)

### geant

* First release (contributed by Sven Ehrke).

### gexace

* First release (contributed by Andreas Leitner, currently
  maintained by Eric Bezault).

### gexmlsplit

* First release (contributed by Andreas Leitner).

### Gobo Eiffel Kernel Library

* No need for `include_path` in the Ace file anymore in
  order to use `KL_STRING_BUFFER_ROUTINES` with ISE Eiffel.
  Use new routines introduced in class `POINTER` in ISE
  Eiffel 4.5 instead.
* Added cluster `$GOBO/library/kernel/io` with directory,
  file and file-system functionalities.
* Added cluster `$GOBO/library/kernel/misc` with miscellaneous
  kernel classes.
* Added cluster `$GOBO/library/kernel/unicode` with Unicode
  support classes (based on the work from Majkel Kretschmar).

### Gobo Eiffel Structure Library

* Fixed bug in feature `force_last` of `DS_SPARSE_SET` and
  `DS_SPARSE_TABLE` when resizing the container.
* Changed postconditions in `DS_LINEAR_CURSOR` and
  `DS_BILINEAR_CURSOR` which prevented descendants to
  implement partial traversals or different traversal
  strategies (reported by Berend de Boer and Einar
  Karttunen).
* Fixed bug in `HASH_TABLE` related to the new implementation
  in ancestor class `DS_SPARSE_TABLE` (reported by Emmanuel
  Bouyer).
* Fixed bug in `LINKED_LIST.cursor_back` (reported by Paul Ford).

### Gobo Eiffel Time Library

* Fixed bug related to the implementation of features `date`
  and `time` in `DATE_TIME` and `DATE_TIME_DURATION` (reported
  by Emmanuel Bouyer).
* Added feature `set_storage` to `DT_DATE` and `DT_TIME`.
* Fixed bug in feature `add_minutes` of `DT_DATE_TIME`
  (reported by Glenn Maughan).
* Fixed bug in feature `set_from_epoch_days` of `DT_DATE`
  when the resulting date in 1 January 1600 (reported by
  Emmanuel Bouyer).
* No need for `include_path` in the Ace file anymore in
  order to use `DT_SYSTEM_CLOCK` with ISE Eiffel.
* Added class `DT_UTC_SYSTEM_CLOCK`.
* Added creation routine `DT_DATE_TIME.make_from_epoch`.

### Gobo Eiffel Pattern Library

* New library with design pattern classes.
* Moved `$GOBO/library/utility/command` cluster to
  `$GOBO/library/pattern/command` and change class
  name prefix from `UT` to `DP`.
* Added feature `exit_code` to class `DP_SHELL_COMMAND`.

### Gobo Eiffel Regexp Library

* New library for regular expression handling. Contains a
  implementation based on the PCRE package (contributed
  by Harald Erdbruegger based on his ePCRE library).

### Gobo Eiffel XML Library

* New library for XML parsing and XML tree handling
  (contributed by Andreas Leitner based on his eXML
  library, and by Franck Arnaud based on his NenieXML
  parser. The library has been redesigned and is
  currently maintained by Franck Arnaud).

### Miscellaneous

* The Gobo project is now taking full advantage of `geant`
  and `gexace` instead of `Makefile` files (which were not portable
  across platforms).

## Version 2.0 - 29 April 2001

### geyacc

* `geyacc` now generates the routine `token_name` along
  with the token codes to make the debugging messages
  more human-readable (suggested by Andreas Leitner).

### gelex

* Added debugging instructions at the end of routine
  `read_token` in classes `YY_COMPRESSED_SCANNER_SKELETON`,
  `YY_INTERACTIVE_SCANNER_SKELETON` and `YY_FULL_SCANNER_SKELETON`.
  One need to compile the system with `debug ("GELEX")`
  enabled. The routine `print_last_token` can be redefined
  in descendant classes to print more debugging information.
  In particular, the routine `token_name` generated by `geyacc`
  can be used to make the debugging output more human-readable.
  (suggested by Andreas Leitner)

### getest

* First release.

### Gobo Eiffel Structure Library

* Added argumentless creation routine `make_default` to
  most containers. In resizable containers `make_default`
  is equivalent to `make (default_capacity)` where
  `default_capacity` is a constant (`10`) defined in class
  `DS_RESIZABLE` (suggested by Franck Arnaud).
* `DS_SORTER` and descendant classes now use `DS_COMPARATOR`
  as comparison criterion (suggested by members of the
  SmallEiffel mailing list).
* Added class `DS_TOPOLOGICAL_SORTER` to sort partially
  ordered items.
* Added `DS_SET` and descendant classes such as `DS_HASH_SET`
  and `DS_MULTIARRAYED_HASH_SET`.
* `DS_HASH_TABLE`: added creation routine `make_map` in
  order to compare keys with `=` instead of `equal`.
* `DS_HASH_TABLE`: added features `remove_found_item`,
  `found_key` and `force_last`.
* Added class `DS_MULTIARRAYED_HASH_TABLE` with the same
  interface as `DS_HASH_TABLE` but implemented with a
  sequence of fixed size arrays instead of a single array.
  This might be useful for hash tables containing a very
  large number of items.
* Fixed bug in `DS_LINKED_LIST.delete` (reported by Emmanuel
  Bouyer).
* Fixed bug in `QUEUE.{force, put, extend}`: removed erroneous
  postcondition `item_pushed` (reported by Emmanuel Bouyer).
* Moved `$GOBO/library/structure/base` to
  `$GOBO/library/structure/other/EiffelBase`.
* Moved cursor classes next to their associated containers
  and removed cluster `$GOBO/library/structure/cursor`.

### Gobo Eiffel Time Library

* First release.

### Miscellaneous

* Removed comments in `loadpath.se` files which caused
  problems on AmigaDOS (suggested by Thomas Aglassinger).
* Added `Makefile` files in various directories.

## Version 1.6 - 20 August 2000

### geyacc

* One can now use manifest strings (e.g. `"<="` or `".."`)
  in place of identifiers (e.g. `LE` or `DOTDOT`) in grammar
  rules (suggested by Berend de Boer).
* Anchored types are now accepted in `%type` declarations.
* Improved format of tokens in verbose file (suggested
  by Roger Browne).
* Added ISE's language extensions to the Eiffel parser
  example (suggested by Patrick Flaherty).
* The Eiffel parser example now accepts empty Eiffel
  source files (suggested by Alexander Kogtenkov).
* Added a few words in the documentation about the Eiffel
  debug instructions spread out in the parser skeleton
  class (suggested by Francis Drai).

### gelex

* Added redefinable routine `default_action` to `YY_SCANNER`
  when default rule is matched (suggested by David Massart).
* Added `pre_action` and `post_action`, called when
  `%option pre-action` and `%option post-action` are specified
  (suggested by Alexander Kogtenkov).
* Added `pre_eof_action` and `post_eof_action`, called when
  `%option pre-eof-action` and `%option post-eof-actio`n are
  specified.
* Added `%option line` to generate code for line and column
  counting (suggested by Alexander Kogtenkov).
* Added `%option position` to generate code for character
  counting since the beginning of the input source.
* Fixed bug when the input buffer contains a null character
  (reported by Emmanuel Stapf).
* Fixed bug when scanning a token larger than the size of
  the input buffer (reported by Emmanuel Stapf).

### Gobo Eiffel Structure Library

* `DS_TRAVERSABLE`: removed postcondition from routine
  `valid_cursor` and made `internal_cursor` deferred
  (suggested by Andreas Leitner).
* `DS_SEARCHABLE`: added features `same_items` and
  `same_equality_tester`.
* `DS_ARRAYED_LIST`, `DS_ARRAYED_STACK`: got rid of garbage
  (i.e. old items at indexes `count+1..capacity`) in
  removal features.
* `DS_TABLE`, `DS_SPARSE_TABLE`, `DS_HASH_TABLE`: added
  feature `put_new`.
* `DS_SPARSE_TABLE`, `DS_HASH_TABLE`: added feature
  `replace_found_item`.
* `DS_SPARSE_TABLE`, `DS_HASH_TABLE`: new optimized
  implementation (requested by Jacques Bouchard).
* `DS_SPARSE_TABLE`: added feature `key`; optimization
  of feature `force` (avoid unnecessary resizing).
* `HASH_TABLE`: optimization of features `put` and
  `force` (avoid unnecessary resizing).
* `DS_SORTER`: Added features `reverse_sort` and
  `reverse_sorted`.

### Gobo Eiffel Kernel Library

* Added class `KL_DIRECTORY` to allow Eiffel compiler
  portable directory access.

### Gobo Eiffel Utility Library

* Fixed bug in feature `append_decimal_integer` from
  class `UT_INTEGER_FORMATTER` when dealing with negative
  values.

## Version 1.5 - 2 October 1999

### geyacc

* Fixed bug in verbose mode: the useless rules and
  nonterminals were not displayed properly (reported
  by Berend de Boer).
* Fixed bug when dealing with two consecutive semantic
  actions in a rule (reported by Alexander Kogtenkov).
* Fixed bug whereby the end-of-file was not recognized
  properly (reported by Patrick Doyle).
* Updated documentation to state that the Eiffel type
  for the semantic of a mid-rule action is the same
  type as declared for the full grouping (reported by
  Andreas Auras).

### Gobo Eiffel Structure Library

* The documentation has been greatly improved.
* Added a `test` directory as a starting point for
  a test suite.
* Added a cluster containing an implementation of the
  main EiffelBase classes based on the Gobo containers.
* Added support for internal iterations (a la EiffelBase).
  Some feature renaming was necessary: routines with an
  external cursor as argument, such as `put_right`,
  have been renamed with the `_cursor` suffix, as in
  `put_right_cursor`. The original feature names have
  been reused by the internal traversal interface, e.g.
  `put_right` inserts an item to the right of the
  internal cursor position.
* Cursors are always kept valid. There is no need for
  calls to `a_cursor.is_valid` anymore.
* `DS_LINEAR_CURSOR` does not inherit from `DS_INDEXED_CURSOR`
  anymore.
* Added classes `DS_QUEUE` and `DS_LINKED_QUEUE`.

## Version 1.4 - 14 April 1999

* Multiple types for semantic values now supported
  in `geyacc`.
* In `geyacc`, `$$` entities are now initialized to their
  default Eiffel values at the beginning of semantic
  actions and the default for missing actions is `{}`
  (it used to be `{$$ := $1}` as in yacc and Bison).
* Added warning/error in `geyacc` when `$N` in a semantic
  action does not match with a symbol in the rule.
* Fixed bug in output of `geyacc` verbose mode (option `-v`).
* Routine `clear_all` from `YY_PARSER_SKELETON` clears
  internal stacks by default (call to `clear_stacks`).
* Added two new types in `$GOBO/library/kernel`:
  `STRING_BUFFER` and `FIXED_ARRAY` (array with lower
  bound equal to zero). These two types are used
  instead of `STRING` and `ARRAY` in `gelex` and `geyacc`
  skeleton classes for optimization purposes.
  `STRING_BUFFER` maps either to `SPECIAL [CHARACTER]`
  or `STRING`, and `FIXED_ARRAY [G]` maps either to
  `SPECIAL [G]` or `ARRAY [G]` depending on the Eiffel
  compiler used. Only ISE Eiffel port has been
  optimized so far. SmallEiffel port can be optimized
  as well using `FAST_ARRAY [G]` or `NATIVE_ARRAY [G]`.
* Added features `Empty_buffer`, `append_text_to_string`
  and `append_text_substring_to_string` to `YY_SCANNER`.
* Added a precondition to routine `set_start_condition`
  in class `YY_SCANNER`.
* Resize input buffer if a call to `unread_character`
  results in too much text being pushed back (it was
  raising a run-time error in previous releases).
* Added command-line option `-x` to `gelex` and `geyacc`
  to allow the generation of semantic actions in
  separate routines.
* Added command-line option `-z` to `gelex` to force the
  generated code to use an `inspect` instruction to
  find out which action to execute. The default is to
  use binary-search implemented with `if` instructions.
* Fixed operator precedence bug in
  `$GOBO/example/parse/eiffel/eiffel_parser.y`.

## Version 1.3 - 15 August 1998

* `geyacc` has been totally rewritten in Eiffel.
* Replaced attribute `output_file` by procedure
  `output` in class `YY_SCANNER` to avoid unnecessary
  console creation in Windows mode with Visual Eiffel.
* Fixed bug in `gelex` in "equivalence class" mode when
  dealing with regular expressions of the form `x{4}`.
* Added warnings in `gelex` when a rule cannot be
  matched and when the default rule can be matched
  despite the `%option nodefault` or `-s` option.
* Renamed classes `KL_SHARED_*_ROUTINES` as
  `KL_IMPORTED_*_ROUTINES`. (The old class names are
  still temporarily valid using the classes in cluster
  `$GOBO/library/kernel/obsolete`.)
* `gepp` now supports `#include "filename"` instructions.
* The second generic parameter of `DS_HASH_TABLE` is now
  constrained to `HASHABLE` (`HASHABLE` was not part of
  SmallEiffel in previous releases).
* Cluster `error` has been added to the Gobo Eiffel
  Utility Library to support a flexible error
  reporting mechanism.

## Version 1.2 - 17 December 1997

* New implementation for variable trailing context
  in `gelex`, with warnings for dangerous trailing
  contexts of form such as `x*/xz*`.
* Improved documentation.

## Version 1.1 - 29 October 1997

* Bug fixed wrt variable trailing context in `gelex`.

## Version 1.0 - 14 October 1997

* First public release.
* Gold Award at the Eiffel Class Struggle '97.
roman-to-kana
=============

A tool for converting roman (English) text to kana (Japanese)
                                                                                                    
design
=============

This tool somewhat ignores the complexities of variable width Unicode characters and builds a solution around the exact parameters of the problem. The input starts of as a standard c-string (char *) and is converted to an array of unsigned integers (unsigned *), giving each character a fixed 4 byte width. Each character is then substituted for its katakana/ hirigana equivalent and the extra characters are removed from the sequence.                                           

For example

* "ke" is the input and starts as a 2 byte ascii string.
* It is converted to unsigned * and becomes an 8 byte fixed width psudo-unicode string.
* The "k" is replaced with the hirigana "け" and the "e" is removed leaving a 4 byte fixed width unicode character which can be printed to standard out.

notes
============

* Characters that cannot be converted are left in place i.e. kevin --> けvいん (There is no "v" in Japanese).
* Unlike some other conversion tools I've come across, n is parsed before double characters so konnichiha --> こんにちは (ko·n·ni·chi·ha) not こっにちは (ko·nni·chi·ha).

usage
============

The first command line argument is taken as the input string.

    roman_to_kana "text to be translated"

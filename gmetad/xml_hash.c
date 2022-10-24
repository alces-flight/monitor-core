/* C code produced by gperf version 3.0.3 */
/* Command-line: gperf -l -H xml_hash -t -F ', 0' -N in_xml_list -k '1,$' -W xml_tags xml_hash.gperf  */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 1 "xml_hash.gperf"

#include <gmetad.h>
#line 4 "xml_hash.gperf"
struct xml_tag;

#define TOTAL_KEYWORDS 37
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 13
#define MIN_HASH_VALUE 2
#define MAX_HASH_VALUE 63
/* maximum key range = 62, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
xml_hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static unsigned char asso_values[] =
    {
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64,  5, 64, 25, 10,  5,
      64, 10, 25,  0, 64, 64, 25, 20,  5,  5,
       0, 64, 25,  0,  0, 20, 35, 64, 40, 20,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64, 64, 64, 64, 64,
      64, 64, 64, 64, 64, 64
    };
  return len + asso_values[(unsigned char)str[len - 1]] + asso_values[(unsigned char)str[0]];
}

#ifdef __GNUC__
__inline
#ifdef __GNUC_STDC_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
struct xml_tag *
in_xml_list (str, len)
     register const char *str;
     register unsigned int len;
{
  static unsigned char lengthtable[] =
    {
       0,  0,  2,  0,  4,  0,  0,  2,  0,  4,  5,  6,  0,  0,
       4,  0,  0,  7, 13,  4, 10,  0,  2,  3,  4,  5,  0,  7,
       3,  4,  5,  0,  7, 13,  9,  5,  0,  7,  8,  9,  0,  0,
       7,  8,  4,  0, 11,  7,  3,  0,  0,  6,  7,  0,  4,  0,
       0,  7,  0,  0,  0,  0,  0,  3
    };
  static struct xml_tag xml_tags[] =
    {
      {"", 0}, {"", 0},
#line 21 "xml_hash.gperf"
      {"IP", IP_TAG},
      {"", 0},
#line 10 "xml_hash.gperf"
      {"TAGS", TAGS_TAG},
      {"", 0}, {"", 0},
#line 34 "xml_hash.gperf"
      {"TN", TN_TAG},
      {"", 0},
#line 38 "xml_hash.gperf"
      {"TYPE", TYPE_TAG},
#line 39 "xml_hash.gperf"
      {"SLOPE", SLOPE_TAG},
#line 40 "xml_hash.gperf"
      {"SOURCE", SOURCE_TAG},
      {"", 0}, {"", 0},
#line 9 "xml_hash.gperf"
      {"NAME", NAME_TAG},
      {"", 0}, {"", 0},
#line 31 "xml_hash.gperf"
      {"AGG_MIN", AGG_MIN_TAG,},
#line 42 "xml_hash.gperf"
      {"EXTRA_ELEMENT", EXTRA_ELEMENT_TAG},
#line 20 "xml_hash.gperf"
      {"DOWN", DOWN_TAG,},
#line 41 "xml_hash.gperf"
      {"EXTRA_DATA", EXTRA_DATA_TAG},
      {"", 0},
#line 19 "xml_hash.gperf"
      {"UP", UP_TAG,},
#line 27 "xml_hash.gperf"
      {"SUM", SUM_TAG,},
#line 8 "xml_hash.gperf"
      {"GRID", GRID_TAG},
#line 33 "xml_hash.gperf"
      {"UNITS", UNITS_TAG},
      {"", 0},
#line 26 "xml_hash.gperf"
      {"METRICS", METRICS_TAG},
#line 28 "xml_hash.gperf"
      {"NUM", NUM_TAG,},
#line 17 "xml_hash.gperf"
      {"HOST", HOST_TAG},
#line 18 "xml_hash.gperf"
      {"HOSTS", HOSTS_TAG,},
      {"", 0},
#line 30 "xml_hash.gperf"
      {"AGG_NUM", AGG_NUM_TAG,},
#line 24 "xml_hash.gperf"
      {"GMOND_STARTED", STARTED_TAG},
#line 11 "xml_hash.gperf"
      {"AUTHORITY", AUTHORITY_TAG},
#line 14 "xml_hash.gperf"
      {"OWNER", OWNER_TAG,},
      {"", 0},
#line 29 "xml_hash.gperf"
      {"AGG_VAL", AGG_VAL_TAG,},
#line 22 "xml_hash.gperf"
      {"LOCATION", LOCATION_TAG},
#line 13 "xml_hash.gperf"
      {"LOCALTIME", LOCALTIME_TAG},
      {"", 0}, {"", 0},
#line 15 "xml_hash.gperf"
      {"LATLONG", LATLONG_TAG,},
#line 23 "xml_hash.gperf"
      {"REPORTED", REPORTED_TAG},
#line 35 "xml_hash.gperf"
      {"TMAX", TMAX_TAG},
      {"", 0},
#line 6 "xml_hash.gperf"
      {"GANGLIA_XML", GANGLIA_XML_TAG},
#line 7 "xml_hash.gperf"
      {"VERSION", VERSION_TAG},
#line 16 "xml_hash.gperf"
      {"URL", URL_TAG,},
      {"", 0}, {"", 0},
#line 25 "xml_hash.gperf"
      {"METRIC", METRIC_TAG},
#line 32 "xml_hash.gperf"
      {"AGG_MAX", AGG_MAX_TAG,},
      {"", 0},
#line 36 "xml_hash.gperf"
      {"DMAX", DMAX_TAG},
      {"", 0}, {"", 0},
#line 12 "xml_hash.gperf"
      {"CLUSTER", CLUSTER_TAG},
      {"", 0}, {"", 0}, {"", 0}, {"", 0}, {"", 0},
#line 37 "xml_hash.gperf"
      {"VAL", VAL_TAG}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = xml_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        if (len == lengthtable[key])
          {
            register const char *s = xml_tags[key].name;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
              return &xml_tags[key];
          }
    }
  return 0;
}

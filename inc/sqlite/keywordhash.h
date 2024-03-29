/***** This file contains automatically generated code ******
**
** The code in this file has been automatically generated by
**
**     $Header: /sqlite/sqlite/tool/mkkeywordhash.c,v 1.30 2007/05/04 18:30:41 drh Exp $
**
** The code in this file implements a function that determines whether
** or not a given identifier is really an SQL keyword.  The same thing
** might be implemented more directly using a hand-written hash table.
** But by using this automatically generated code, the size of the code
** is substantially reduced.  This is important for embedded applications
** on platforms with limited memory.
*/
/* Hash score: 165 */
static int keywordCode(const char *z, int n){
  /* zText[] encodes 775 bytes of keywords in 526 bytes */
  static const char zText[526] =
    "BEFOREIGNOREGEXPLAINSTEADDESCAPEACHECKEYCONSTRAINTERSECTABLEFT"
    "HENDATABASELECTRANSACTIONATURALTERAISELSEXCEPTRIGGEREFERENCES"
    "UNIQUERYATTACHAVINGROUPDATEMPORARYBEGINNEREINDEXCLUSIVEXISTSBETWEEN"
    "OTNULLIKECASCADEFERRABLECASECOLLATECREATECURRENT_DATEDELETEDETACH"
    "IMMEDIATEJOINSERTMATCHPLANALYZEPRAGMABORTVALUESVIRTUALIMITWHEN"
    "WHERENAMEAFTEREPLACEANDEFAULTAUTOINCREMENTCASTCOLUMNCOMMITCONFLICT"
    "CROSSCURRENT_TIMESTAMPRIMARYDEFERREDISTINCTDROPFAILFROMFULLGLOB"
    "YIFINTOFFSETISNULLORDERESTRICTOUTERIGHTROLLBACKROWUNIONUSINGVACUUM"
    "VIEWINITIALLY";
  static const unsigned char aHash[127] = {
      63,  92, 109,  61,   0,  38,   0,   0,  69,   0,  64,   0,   0,
     102,   4,  65,   7,   0, 108,  72, 103,  99,   0,  22,   0,   0,
     113,   0, 111, 106,   0,  18,  80,   0,   1,   0,   0,  56,  57,
       0,  55,  11,   0,  33,  77,  89,   0, 110,  88,   0,   0,  45,
       0,  90,  54,   0,  20,   0, 114,  34,  19,   0,  10,  97,  28,
      83,   0,   0, 116,  93,  47, 115,  41,  12,  44,   0,  78,   0,
      87,  29,   0,  86,   0,   0,   0,  82,  79,  84,  75,  96,   6,
      14,  95,   0,  68,   0,  21,  76,  98,  27,   0, 112,  67, 104,
      49,  40,  71,   0,   0,  81, 100,   0, 107,   0,  15,   0,   0,
      24,   0,  73,  42,  50,   0,  16,  48,   0,  37,
  };
  static const unsigned char aNext[116] = {
       0,   0,   0,   0,   0,   0,   0,   0,   0,   9,   0,   0,   0,
       0,   0,   0,   0,   5,   0,   0,   0,   0,   0,   0,   0,   0,
       0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  32,   0,   0,
      17,   0,   0,   0,  36,  39,   0,   0,  25,   0,   0,  31,   0,
       0,   0,  43,  52,   0,   0,   0,  53,   0,   0,   0,   0,   0,
       0,   0,   0,   0,  51,   0,   0,   0,   0,  26,   0,   8,  46,
       2,   0,   0,   0,   0,   0,   0,   0,   3,  58,  66,   0,  13,
       0,  91,  85,   0,  94,   0,  74,   0,   0,  62,   0,  35, 101,
       0,   0, 105,  23,  30,  60,  70,   0,   0,  59,   0,   0,
  };
  static const unsigned char aLen[116] = {
       6,   7,   3,   6,   6,   7,   7,   3,   4,   6,   4,   5,   3,
      10,   9,   5,   4,   4,   3,   8,   2,   6,  11,   2,   7,   5,
       5,   4,   6,   7,  10,   6,   5,   6,   6,   5,   6,   4,   9,
       2,   5,   5,   7,   5,   9,   6,   7,   7,   3,   4,   4,   7,
       3,  10,   4,   7,   6,  12,   6,   6,   9,   4,   6,   5,   4,
       7,   6,   5,   6,   7,   5,   4,   5,   6,   5,   7,   3,   7,
      13,   2,   2,   4,   6,   6,   8,   5,  17,  12,   7,   8,   8,
       2,   4,   4,   4,   4,   4,   2,   2,   4,   6,   2,   3,   6,
       5,   8,   5,   5,   8,   3,   5,   5,   6,   4,   9,   3,
  };
  static const unsigned short int aOffset[116] = {
       0,   2,   2,   6,  10,  13,  18,  23,  25,  26,  31,  33,  37,
      40,  47,  55,  58,  61,  63,  65,  70,  71,  76,  85,  86,  91,
      95,  99, 102, 107, 113, 123, 126, 131, 136, 141, 144, 148, 148,
     152, 157, 160, 164, 166, 169, 177, 183, 189, 189, 192, 195, 199,
     200, 204, 214, 218, 225, 231, 243, 249, 255, 264, 266, 272, 277,
     279, 286, 291, 296, 302, 308, 313, 317, 320, 326, 330, 337, 339,
     346, 348, 350, 359, 363, 369, 375, 383, 388, 388, 404, 411, 418,
     419, 426, 430, 434, 438, 442, 445, 447, 449, 452, 452, 455, 458,
     464, 468, 476, 480, 485, 493, 496, 501, 506, 512, 516, 521,
  };
  static const unsigned char aCode[116] = {
    TK_BEFORE,     TK_FOREIGN,    TK_FOR,        TK_IGNORE,     TK_LIKE_KW,    
    TK_EXPLAIN,    TK_INSTEAD,    TK_ADD,        TK_DESC,       TK_ESCAPE,     
    TK_EACH,       TK_CHECK,      TK_KEY,        TK_CONSTRAINT, TK_INTERSECT,  
    TK_TABLE,      TK_JOIN_KW,    TK_THEN,       TK_END,        TK_DATABASE,   
    TK_AS,         TK_SELECT,     TK_TRANSACTION,TK_ON,         TK_JOIN_KW,    
    TK_ALTER,      TK_RAISE,      TK_ELSE,       TK_EXCEPT,     TK_TRIGGER,    
    TK_REFERENCES, TK_UNIQUE,     TK_QUERY,      TK_ATTACH,     TK_HAVING,     
    TK_GROUP,      TK_UPDATE,     TK_TEMP,       TK_TEMP,       TK_OR,         
    TK_BEGIN,      TK_JOIN_KW,    TK_REINDEX,    TK_INDEX,      TK_EXCLUSIVE,  
    TK_EXISTS,     TK_BETWEEN,    TK_NOTNULL,    TK_NOT,        TK_NULL,       
    TK_LIKE_KW,    TK_CASCADE,    TK_ASC,        TK_DEFERRABLE, TK_CASE,       
    TK_COLLATE,    TK_CREATE,     TK_CTIME_KW,   TK_DELETE,     TK_DETACH,     
    TK_IMMEDIATE,  TK_JOIN,       TK_INSERT,     TK_MATCH,      TK_PLAN,       
    TK_ANALYZE,    TK_PRAGMA,     TK_ABORT,      TK_VALUES,     TK_VIRTUAL,    
    TK_LIMIT,      TK_WHEN,       TK_WHERE,      TK_RENAME,     TK_AFTER,      
    TK_REPLACE,    TK_AND,        TK_DEFAULT,    TK_AUTOINCR,   TK_TO,         
    TK_IN,         TK_CAST,       TK_COLUMNKW,   TK_COMMIT,     TK_CONFLICT,   
    TK_JOIN_KW,    TK_CTIME_KW,   TK_CTIME_KW,   TK_PRIMARY,    TK_DEFERRED,   
    TK_DISTINCT,   TK_IS,         TK_DROP,       TK_FAIL,       TK_FROM,       
    TK_JOIN_KW,    TK_LIKE_KW,    TK_BY,         TK_IF,         TK_INTO,       
    TK_OFFSET,     TK_OF,         TK_SET,        TK_ISNULL,     TK_ORDER,      
    TK_RESTRICT,   TK_JOIN_KW,    TK_JOIN_KW,    TK_ROLLBACK,   TK_ROW,        
    TK_UNION,      TK_USING,      TK_VACUUM,     TK_VIEW,       TK_INITIALLY,  
    TK_ALL,        
  };
  int h, i;
  if( n<2 ) return TK_ID;
  h = ((charMap(z[0])*4) ^
      (charMap(z[n-1])*3) ^
      n) % 127;
  for(i=((int)aHash[h])-1; i>=0; i=((int)aNext[i])-1){
    if( aLen[i]==n && sqlite3StrNICmp(&zText[aOffset[i]],z,n)==0 ){
      return aCode[i];
    }
  }
  return TK_ID;
}
int sqlite3KeywordCode(const unsigned char *z, int n){
  return keywordCode((char*)z, n);
}

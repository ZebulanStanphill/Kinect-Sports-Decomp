#include <string.h>

typedef struct Attribute_82722540 {
    char *name;
} Attribute_82722540;

extern char lbl_82010C58[]; /* "compositionSegment" */
extern char lbl_82010C48[]; /* "clauseSegment" */
extern char lbl_82010C34[]; /* "convertedSegment" */
extern char lbl_82010C24[]; /* "phraseLengthAdj" */
extern char lbl_82010C14[]; /* "lowConfSegment" */

int fn_82722540(Attribute_82722540 **attribute)
{
    const char *name = (*attribute)->name;
    int type = 5;

    if (strcmp(name, lbl_82010C58) == 0)
        type = 0;
    else if (strcmp(name, lbl_82010C48) == 0)
        type = 1;
    else if (strcmp(name, lbl_82010C34) == 0)
        type = 2;
    else if (strcmp(name, lbl_82010C24) == 0)
        type = 3;
    else if (strcmp(name, lbl_82010C14) == 0)
        type = 4;
    return type;
}

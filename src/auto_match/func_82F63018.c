#include <string.h>

typedef struct {
    unsigned long handle;
    unsigned int codePage;
    const short *table;
    int ownsTable;
} CtypeInfo_82F63018;

extern unsigned long *fn_82F70470(void);
extern unsigned int fn_82D7E470(void);
extern void *fn_82F6E1C8(unsigned int count, unsigned int size);
extern const unsigned short *fn_82F70480(void);

CtypeInfo_82F63018 fn_82F63018(void)
{
    CtypeInfo_82F63018 info;
    info.handle = fn_82F70470()[1];
    info.codePage = fn_82D7E470();
    info.table = (short *)fn_82F6E1C8(256, 2);
    if (info.table != 0) {
        memcpy((void *)info.table, fn_82F70480(), 256 * 2);
        info.ownsTable = 1;
    } else {
        info.table = (const short *)fn_82F70480();
        info.ownsTable = 0;
    }
    return info;
}

/* Creates the front-end and error localisation tables once, then reads the save game name
   and the backup save game name from the front-end table. */

typedef struct LocTable_82489058 LocTable_82489058;

typedef struct Tables_82489058 {
    int created;                 /* 0x0 */
    LocTable_82489058 *frontend; /* 0x4 */
    LocTable_82489058 *error;    /* 0x8 */
} Tables_82489058;

typedef struct SaveNames_82489058 {
    long refs;                       /* 0x0 */
    unsigned short name[0x80];       /* 0x4 */
    unsigned short backupName[0x80]; /* 0x104 */
} SaveNames_82489058;

extern Tables_82489058 lbl_83276728;
extern SaveNames_82489058 lbl_831D0968;
extern char lbl_821BEAF0[];
extern void fn_82520158(const char *name, void **handle, int flags);
extern void *fn_8265C9E0(unsigned int size);
extern LocTable_82489058 *fn_82528B78(void *memory, void **handle, const char *name);
extern void fn_82528BF8(LocTable_82489058 *table, const char *key, unsigned short *out, int size, int a,
                        int b);

void fn_82489058(void)
{
    void *frontendHandle;
    void *errorHandle;
    void *memory;

    if (lbl_83276728.created == 0) {
        fn_82520158("frontend_loctext", &frontendHandle, 0);
        fn_82520158("error_loctext", &errorHandle, 0);
        memory = fn_8265C9E0(0x24);
        if (memory != 0) {
            lbl_83276728.frontend = fn_82528B78(memory, &frontendHandle, "frontend");
        } else {
            lbl_83276728.frontend = 0;
        }
        memory = fn_8265C9E0(0x24);
        if (memory != 0) {
            lbl_83276728.error = fn_82528B78(memory, &errorHandle, lbl_821BEAF0);
        } else {
            lbl_83276728.error = 0;
        }
        lbl_83276728.created = 1;
    }
    fn_82528BF8(lbl_83276728.frontend, "savegamename", lbl_831D0968.name, 0x80, 1, 1);
    fn_82528BF8(lbl_83276728.frontend, "savegamebackupname", lbl_831D0968.backupName, 0x80, 1, 1);
}

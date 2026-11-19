typedef struct Owner_8242E460 {
    char unk000[0x9c];
    unsigned int *script; /* 0x9C */
} Owner_8242E460;

typedef struct Object_8242E460 {
    char unk000[0x174];
    Owner_8242E460 *owner; /* 0x174 */
} Object_8242E460;

extern unsigned int lbl_83297B88;
extern unsigned int lbl_83297704;
extern unsigned int lbl_83297708;
extern unsigned int lbl_8329770C;
extern unsigned int fn_8265BF48(const char *name, int seed);
extern int fn_825200A8(void *a, void *b);

int fn_8242E460(Object_8242E460 *object)
{
    unsigned int script;

    if ((lbl_83297B88 & 1) == 0) {
        lbl_83297B88 |= 1;
        lbl_83297704 = fn_8265BF48("AMID_BRS_script_athletics_main_e3hurdlesshowfloor_default_gbox", 0);
    }
    if ((lbl_83297B88 & 2) == 0) {
        lbl_83297B88 |= 2;
        lbl_83297708 = fn_8265BF48("AMID_BRS_script_athletics_main_e3biathlon1p_default_gbox", 0);
    }
    if ((lbl_83297B88 & 4) == 0) {
        lbl_83297B88 |= 4;
        lbl_8329770C = fn_8265BF48("AMID_BRS_script_athletics_main_e3biathlon_default_gbox", 0);
    }
    script = *object->owner->script;
    if (fn_825200A8(&script, &lbl_83297704) == 0 && fn_825200A8(&script, &lbl_83297708) == 0 &&
        fn_825200A8(&script, &lbl_8329770C) == 0) {
        return 0;
    }
    return 1;
}

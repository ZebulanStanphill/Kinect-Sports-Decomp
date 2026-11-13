extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

/* text is the original expression; fn_82B7F488 is CP_GetRS */
#define CP_ASSERT(e, text, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", text, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\cp_common.cpp", line)

typedef struct FieldDesc_82B9FA18 {
    unsigned int rs;
    int word;
    unsigned int mask;
    unsigned int shift;
} FieldDesc_82B9FA18;

typedef struct FieldTable_82B9FA18 {
    int unk0;
    int unk4;
    FieldDesc_82B9FA18 *fields;
    int unkC;
} FieldTable_82B9FA18;

typedef struct RenderState_82B9FA18 {
    int unk0;
    int unk4;
    unsigned int words[1];
} RenderState_82B9FA18;

typedef struct CP_82B9FA18 CP_82B9FA18;

extern FieldTable_82B9FA18 lbl_8316D918;
extern RenderState_82B9FA18 *fn_82B7F488(CP_82B9FA18 *pCP, unsigned int rs);

void fn_82B9FA18(CP_82B9FA18 *pCP, unsigned int field, unsigned int value)
{
    FieldDesc_82B9FA18 *fields = lbl_8316D918.fields;
    FieldDesc_82B9FA18 *desc;
    CP_ASSERT(pCP, "pCP", 0x69a);
    CP_ASSERT(fn_82B7F488(pCP, 0), "CP_GetRS(pCP, 0)", 0x69b);
    desc = &fields[field];
    fn_82B7F488(pCP, desc->rs)->words[desc->word] &= ~desc->mask;
    fn_82B7F488(pCP, desc->rs)->words[desc->word] |= (value << desc->shift) & desc->mask;
}

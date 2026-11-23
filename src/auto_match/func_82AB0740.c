typedef struct Context_82AB0740 {
    unsigned char padding[8];
    unsigned int samplerCount; /* 0x08 */
    unsigned int samplerMask;  /* 0x0c */
} Context_82AB0740;

typedef void (*Report_82AB0740)(void *, int, int, const char *);

extern void fn_82A29A38(void);
extern void fn_82AB03B0(unsigned int, int, unsigned int **);
extern void fn_82AB0450(unsigned int, int, unsigned int, int, const unsigned int *, unsigned int,
                        Context_82AB0740 *, unsigned int **);
extern void fn_82AB0600(unsigned int, int, unsigned int, int, const unsigned int *, unsigned int,
                        Context_82AB0740 *, unsigned int **);
extern int fn_82F6DCE0(char *, unsigned int, const char *, ...);
extern unsigned int lbl_83160538[];
extern unsigned int lbl_83160548[];
extern unsigned int lbl_83160558[];
extern unsigned int lbl_83160568[];

int fn_82AB0740(const unsigned int **input, unsigned int version, Context_82AB0740 *context,
                unsigned int **output, void *reportContext, Report_82AB0740 report)
{
    const unsigned int *cursor = *input;
    unsigned int declaration;
    unsigned int operand;
    unsigned int index;
    int type;
    unsigned int mask;
    const unsigned int *mapping;
    char message[200];

    if ((*(const unsigned char *)cursor & 15) != 2) {
        fn_82A29A38();
    }
    if (version < 0xffff0200) {
        fn_82A29A38();
    }
    declaration = *++cursor;
    operand = *++cursor;
    ++cursor;
    type = ((operand & 0x1800) | ((operand >> 20) & 0x700)) >> 8;
    index = operand & 0x7ff;
    if (type == 10) {
        unsigned int count;

        if (index >= 16) {
            report(reportContext, 1, 0x13f1, "old back end only supports samplers s0..s15");
            return 2;
        }
        fn_82AB03B0(index, declaration & 0x78000000, output);
        count = index + 1;
        if (count < context->samplerCount) {
            count = context->samplerCount;
        }
        context->samplerCount = count;
        context->samplerMask |= 1U << index;
    } else {
        mask = operand & 0xf0000;
        switch (type) {
        case 1:
            if (version >= 0xffff0300) {
                int usage;
                unsigned int semantic;
                int flag;

                if (index >= 16) {
                    fn_82A29A38();
                }
                usage = declaration & 15;
                flag = (operand >> 22) & 1;
                semantic = (declaration >> 16) & 15;
                if (usage == 10) {
                    flag = 1;
                }
                if (usage == 5 && semantic >= 8) {
                    fn_82F6DCE0(message, sizeof(message),
                                "the old back end cannot handle the input semantic texcoord%d. "
                                "The old back end only supports texcoord0..texcoord7.",
                                semantic);
                    report(reportContext, 1, 0x13f2, message);
                    return 2;
                }
                fn_82AB0450(index, usage, semantic, flag, lbl_83160568, mask, context, output);
            } else {
                if (index == 0) {
                    mapping = lbl_83160538;
                } else {
                    mapping = lbl_83160548;
                    if (index >= 2) {
                        fn_82A29A38();
                    }
                }
                fn_82AB0600(index, 10, index, 1, mapping, mask, context, output);
            }
            break;

        case 3:
            if (version >= 0xffff0300) {
                fn_82A29A38();
            }
            if (index >= 8) {
                fn_82A29A38();
            }
            fn_82AB0600(index + 2, 5, index, 0, lbl_83160558, mask, context, output);
            break;

        default:
            fn_82A29A38();
            break;

        case 17:
            if (version < 0xffff0300) {
                fn_82A29A38();
            }
            break;
        }
    }
    *input = cursor;
    return 0;
}

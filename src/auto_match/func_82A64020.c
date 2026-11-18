typedef void (*Converter_82A64020)(void);

extern void fn_82A5F7B0(void);
extern void fn_82A5F968(void);
extern void fn_82A5FA70(void);
extern void fn_82A5FC48(void);
extern void fn_82A5FF30(void);
extern void fn_82A60170(void);
extern void fn_82A60738(void);
extern void fn_82A60C98(void);
extern void fn_82A61080(void);
extern void fn_82A61478(void);
extern void fn_82A61858(void);
extern void fn_82A61A70(void);
extern void fn_82A61BB0(void);
extern void fn_82A61DE0(void);
extern void fn_82A62180(void);
extern void fn_82A62518(void);
extern void fn_82A62C50(void);
extern void fn_82A63350(void);
extern void fn_82A63768(void);
extern void fn_82A63BC8(void);

Converter_82A64020 fn_82A64020(unsigned int mode, unsigned int sourceFormat, unsigned int destFormat,
                               unsigned int flags)
{
    Converter_82A64020 converter = 0;

    switch (mode) {
    case 0:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        converter = fn_82A63BC8;
        break;
    case 1:
        if (sourceFormat == 1) {
            if (destFormat == 2) {
                converter = fn_82A61A70;
                goto done;
            }
            if (destFormat == 6) {
                if (flags & 4) {
                    converter = fn_82A63350;
                } else {
                    converter = fn_82A61BB0;
                }
                goto done;
            }
        } else if (sourceFormat == 2) {
            if (destFormat == 6) {
                converter = fn_82A61DE0;
                goto done;
            }
        } else if (sourceFormat == 6) {
            if (destFormat == 2) {
                converter = fn_82A62180;
                goto done;
            }
        } else if (sourceFormat == 4 && destFormat == 6) {
            converter = fn_82A62518;
            goto done;
        }
        if (flags & 2) {
            if ((flags & 1) || (sourceFormat <= 4 && sourceFormat != 3 && (flags & 4))) {
                converter = fn_82A63768;
            } else if (sourceFormat <= 6) {
                converter = fn_82A62C50;
            } else {
                converter = fn_82A61858;
            }
        } else {
            converter = fn_82A61858;
        }
        break;
    case 7:
        if (sourceFormat == 1) {
            if (destFormat == 2) {
                converter = fn_82A5F968;
                goto done;
            }
            if (destFormat == 6) {
                if (flags & 4) {
                    converter = fn_82A60C98;
                } else {
                    converter = fn_82A5FA70;
                }
                goto done;
            }
        } else if (sourceFormat == 2) {
            if (destFormat == 6) {
                if (flags & 4) {
                    converter = fn_82A61080;
                } else {
                    converter = fn_82A5FC48;
                }
                goto done;
            }
        } else if (sourceFormat == 6) {
            if (destFormat == 2) {
                converter = fn_82A5FF30;
                goto done;
            }
        } else if (sourceFormat == 4 && destFormat == 6) {
            converter = fn_82A60170;
            goto done;
        }
        if (flags & 2) {
            if ((flags & 1) || (sourceFormat <= 4 && sourceFormat != 3 && (flags & 4))) {
                converter = fn_82A61478;
            } else if (sourceFormat <= 6) {
                converter = fn_82A60738;
            } else {
                converter = fn_82A5F7B0;
            }
        } else {
            converter = fn_82A5F7B0;
        }
        break;
    }
done:
    return converter;
}

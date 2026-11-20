typedef struct Table_8291C0A8 {
    char pad0[8];
    const char *strings; /* 0x8 */
} Table_8291C0A8;

typedef struct Info_8291C0A8 {
    char pad0[0xa];
    unsigned short memberCount; /* 0xa */
} Info_8291C0A8;

typedef struct Constant_8291C0A8 Constant_8291C0A8;

struct Constant_8291C0A8 {
    Table_8291C0A8 *table;   /* 0x0 */
    unsigned int nameOffset; /* 0x4 */
    char pad8[0x10];
    Info_8291C0A8 *info; /* 0x18 */
    char pad1c[0x1c];
    Constant_8291C0A8 **members; /* 0x38 */
};

extern int isspace(int c);
extern int isdigit(int c);
extern int isalnum(int c);
extern Constant_8291C0A8 *fn_8291BB88(Constant_8291C0A8 *constant, unsigned int index);

Constant_8291C0A8 *fn_8291C0A8(Constant_8291C0A8 *constant, const char *name, int isFirst)
{
    for (;;) {
        const char *p = name;
        unsigned int length;
        unsigned int count;
        unsigned int i;
        Constant_8291C0A8 *member;

        while (isspace(*p)) {
            p++;
        }
        if (*p == 0) {
            return constant;
        }
        if (*p == '[') {
            unsigned int index;
            Constant_8291C0A8 *child;

            do {
                p++;
            } while (isspace(*p));
            if (!isdigit(*p)) {
                goto fail;
            }
            index = 0;
            while (isdigit(*p)) {
                index = index * 10 + *p - '0';
                p++;
            }
            while (isspace(*p)) {
                p++;
            }
            if (*p != ']') {
                goto fail;
            }
            child = fn_8291BB88(constant, index);
            if (child == 0) {
                goto fail;
            }
            name = p + 1;
            constant = child;
            isFirst = 0;
            continue;
        }
        if (*p != '.' && !isFirst) {
            goto fail;
        }
        if (*p == '.') {
            p++;
        }
        while (isspace(*p)) {
            p++;
        }
        length = 0;
        while (isalnum(p[length]) || p[length] == '_') {
            length++;
        }
        if (length == 0) {
            goto fail;
        }
        count = constant->info->memberCount;
        for (i = 0; i < count; i++) {
            Constant_8291C0A8 *candidate = constant->members[i];
            const char *memberName;
            unsigned int j;
            if (candidate->nameOffset == 0) {
                continue;
            }
            memberName = constant->table->strings + candidate->nameOffset;
            for (j = 0; j < length; j++) {
                if (memberName[j] < p[j]) {
                    goto next;
                }
                if (memberName[j] > p[j]) {
                    goto next;
                }
            }
            if (j != length || memberName[j] == 0) {
                goto found;
            }
        next:;
        }
        goto fail;
    found:
        member = constant->members[i];
        if (member == 0) {
            goto fail;
        }
        name = p + length;
        constant = member;
        isFirst = 0;
    }
fail:
    return 0;
}

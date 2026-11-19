typedef struct Object_82695608 {
    void *target; /* 0x0 */
    char pad004[0xc];
    void *resolved; /* 0x10 */
} Object_82695608;

typedef struct Value_82695608 {
    unsigned char type; /* 0x0 */
    char pad001[3];

    union {
        unsigned char boolean;
        int integer;
        Object_82695608 *object;
    } u; /* 0x4 */

    union {
        double number;
        int integer;
    } v; /* 0x8 */
} Value_82695608;

typedef struct Environment_82695608 {
    char pad000[0x7c];
    unsigned char version; /* 0x7c */
} Environment_82695608;

extern const double lbl_82005710;
extern unsigned char fn_826951F0(double *out, void *target);
extern void *fn_82695370(Value_82695608 *value);

static __forceinline unsigned char IsNaN_82695608(double d)
{
    unsigned __int64 b = *(unsigned __int64 *)&d;
    return (b & 0x7ff0000000000000ULL) == 0x7ff0000000000000ULL && (b & 0x000fffffffffffffULL) != 0;
}

static __forceinline unsigned char NumberToBool_82695608(double number)
{
    if (IsNaN_82695608(number)) {
        return 0;
    }
    return number != lbl_82005710;
}

unsigned char fn_82695608(Value_82695608 *value, Environment_82695608 *env)
{
    double number;

    if (value->type == 5) {
        if (value->u.object->resolved == 0) {
            return 0;
        }
        if (env->version <= 6) {
            if (fn_826951F0(&number, value->u.object->target)) {
                return NumberToBool_82695608(number);
            }
            return 0;
        }
        return 1;
    } else if (value->type == 3) {
        return NumberToBool_82695608(value->v.number);
    } else if (value->type == 4) {
        return value->v.integer != 0;
    } else if (value->type == 2) {
        return value->u.boolean;
    } else if (value->type == 6) {
        return value->u.integer != 0;
    } else if (value->type == 7) {
        return fn_82695370(value) != 0;
    } else if (value->type == 8) {
        return value->u.integer != 0;
    } else {
        return value->type == 0xb;
    }
}

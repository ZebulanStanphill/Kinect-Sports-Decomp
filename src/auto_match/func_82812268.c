typedef union Id_82812268 {
    __int64 value;
    struct {
        unsigned int high;
        unsigned int low;
    } part;
} Id_82812268;

extern unsigned int fn_82A1BB18(void);

static __forceinline unsigned char IsSet(const Id_82812268 *id)
{
    return id->value != 0;
}

unsigned char fn_82812268(const Id_82812268 *p)
{
    Id_82812268 id = *p;

    return IsSet(&id) && id.part.low == fn_82A1BB18();
}

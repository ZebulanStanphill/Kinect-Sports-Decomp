typedef struct MemberName MemberName;
typedef struct MemberValue MemberValue;
typedef struct SubObject SubObject;
typedef struct {
    void (*f0)(void); void (*f1)(void); void (*f2)(void);
    void (*f3)(void); void (*f4)(void); void (*f5)(void);
    void (*f6)(void);
    unsigned char (*set_flags)(SubObject *,void *,const MemberName *,unsigned char);
} VTable;
struct SubObject {VTable *vtable;};
typedef struct {char pad[16];SubObject sub;} Parent;
typedef struct {void *vtable;Parent *parent;void *context;} Visitor;
void fn_826A8680(Visitor *visitor,const MemberName *name,const MemberValue *value,unsigned char flags) {
    SubObject *sub=&visitor->parent->sub;
    sub->vtable->set_flags(sub,visitor->context,name,flags|1);
}

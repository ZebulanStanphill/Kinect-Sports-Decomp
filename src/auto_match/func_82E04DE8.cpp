// hkxEnvironment::setVariable(name, value): sets, adds or (value == 0) removes a variable.
#include "havok/hkArray.h"
#include "havok/hkStringPtr.h"

// One environment variable: two hkStringPtr (name, value), 8 bytes.
struct Variable_82E04DE8 {
    const char *name;  /* 0x00 */
    const char *value; /* 0x04 */
};

struct Environment_82E04DE8 {
    void *vtable;                             /* 0x00 */
    int memSizeAndRefCount;                   /* 0x04 */
    hkArrayBase<Variable_82E04DE8> variables; /* 0x08 */
};

extern "C" {
void fn_82CED540(const char **self, const char **other); // hkStringPtr::hkStringPtr(const hkStringPtr &)
int fn_82E04B20(Environment_82E04DE8 *self, const char *name); // index of a variable, or -1
}

static __forceinline void CopyWords(void *dst, const void *src, int n)
{
    unsigned int *d = (unsigned int *)dst;
    const unsigned int *s = (const unsigned int *)src;
    int i = 0;
    do {
        d[i] = s[i];
        i++;
    } while (i < n);
}

extern "C" int fn_82E04DE8(Environment_82E04DE8 *self, const char *name, const char *value)
{
    int index = fn_82E04B20(self, name);
    if (value == HK_NULL) {
        if (index == -1) {
            return 1;
        }
        Variable_82E04DE8 *removed = &self->variables.m_data[index];
        fn_82CED5B8(reinterpret_cast<hkStringPtr *>(&removed->value));
        fn_82CED5B8(reinterpret_cast<hkStringPtr *>(&removed->name));
        self->variables.m_size--;
        if (self->variables.m_size != index) {
            CopyWords(self->variables.m_data + index, self->variables.m_data + self->variables.m_size, 2);
        }
        return 0;
    }
    if (index != -1) {
        *reinterpret_cast<hkStringPtr *>(&self->variables.m_data[index].value) = value;
        return 0;
    }
    Variable_82E04DE8 newVar;
    fn_82CED2F8(reinterpret_cast<hkStringPtr *>(&newVar.name));
    fn_82CED2F8(reinterpret_cast<hkStringPtr *>(&newVar.value));
    *reinterpret_cast<hkStringPtr *>(&newVar.name) = name;
    *reinterpret_cast<hkStringPtr *>(&newVar.value) = value;
    hkArrayBase<Variable_82E04DE8> *variables = &self->variables;
    hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
    if (variables->m_size == variables->getCapacity()) {
        hkArrayUtil::_reserveMore(alloc, variables, sizeof(Variable_82E04DE8));
    }
    Variable_82E04DE8 *slot = variables->m_data + variables->m_size;
    if (slot != HK_NULL) {
        fn_82CED540(&slot->name, &newVar.name);
        fn_82CED540(&slot->value, &newVar.value);
    }
    variables->m_size++;
    fn_82CED5B8(reinterpret_cast<hkStringPtr *>(&newVar.value));
    fn_82CED5B8(reinterpret_cast<hkStringPtr *>(&newVar.name));
    return 0;
}

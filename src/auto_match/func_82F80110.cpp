/* CRT C++ EH: map a control PC to its EH state through the function's
   IP-to-state table (entries sorted by IP). */

struct IPtoStateMapEntry {
    unsigned long Ip;
    int State;
};

struct _s_FuncInfo {
    int words[5];
    unsigned int nIPMapEntries;              /* 0x14 */
    IPtoStateMapEntry *pIPtoStateMap;        /* 0x18 */
};

void _inconsistency(void);

int __StateFromControlPc(const _s_FuncInfo *funcInfo, unsigned long pc)
{
    unsigned int count;
    unsigned int i;

    if (funcInfo == 0)
        _inconsistency();
    count = funcInfo->nIPMapEntries;
    if (count == 0)
        _inconsistency();
    if (funcInfo->pIPtoStateMap == 0)
        _inconsistency();
    for (i = 0; i < count; i++) {
        if (pc == funcInfo->pIPtoStateMap[i].Ip)
            return funcInfo->pIPtoStateMap[i].State;
        if (pc < funcInfo->pIPtoStateMap[i].Ip)
            return i == 0 ? -1 : funcInfo->pIPtoStateMap[i - 1].State;
    }
    return funcInfo->pIPtoStateMap[count - 1].State;
}

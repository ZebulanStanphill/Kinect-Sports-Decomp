/* hkpGroupFilter::enableCollisionsBetween(layerA, layerB) (pair of Matching fn_82D4B528). */
typedef struct GroupFilter_82D4B4F0 {
    char pad0[0x30];
    int m_nextFreeSystemGroup;                  /* 0x30 */
    unsigned int m_collisionLookupTable[32];    /* 0x34 */
} GroupFilter_82D4B4F0;

void fn_82D4B4F0(GroupFilter_82D4B4F0 *self, int layerA, int layerB)
{
    self->m_collisionLookupTable[layerA] |= 1 << layerB;
    self->m_collisionLookupTable[layerB] |= 1 << layerA;
}

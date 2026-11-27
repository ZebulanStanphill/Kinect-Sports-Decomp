#include "xdk/vectorintrinsics.h"

typedef struct hkpEntity_82DF5EB0 hkpEntity_82DF5EB0;
typedef struct hkMemoryAllocator_82DF5EB0 hkMemoryAllocator_82DF5EB0;

/* hkpConstraintInstance */
typedef struct ConstraintInstance_82DF5EB0 {
    char pad0[0x14];
    hkpEntity_82DF5EB0 *entities[2]; /* 0x14 m_entities */
} ConstraintInstance_82DF5EB0;

typedef struct EntityArray_82DF5EB0 {
    hkpEntity_82DF5EB0 **data; /* 0x00 */
    int size;                  /* 0x04 */
    int capacityAndFlags;      /* 0x08 */
} EntityArray_82DF5EB0;

/* hkpConstraintChainInstance */
typedef struct ChainInstance_82DF5EB0 {
    char pad0[0x38];
    EntityArray_82DF5EB0 chainedEntities; /* 0x38 m_chainedEntities */
} ChainInstance_82DF5EB0;

typedef struct PivotPair_82DF5EB0 {
    __vector4 pivotInA; /* 0x00 */
    __vector4 pivotInB; /* 0x10 */
} PivotPair_82DF5EB0;

typedef struct PivotArray_82DF5EB0 {
    PivotPair_82DF5EB0 *data;
    int size;
    int capacityAndFlags;
} PivotArray_82DF5EB0;

/* the chain's constraint data (pivot pairs at 0x18) */
typedef struct ChainData_82DF5EB0 {
    char pad0[0x18];
    PivotArray_82DF5EB0 infos; /* 0x18 */
} ChainData_82DF5EB0;

typedef struct MemoryRouter_82DF5EB0 {
    char pad0[0x10];
    hkMemoryAllocator_82DF5EB0 *heap; /* 0x10 */
} MemoryRouter_82DF5EB0;

extern int fn_82DED480(ConstraintInstance_82DF5EB0 *constraint, __vector4 *pivotInA, __vector4 *pivotInB);
extern void fn_82D9CDC0(ChainInstance_82DF5EB0 *chain, hkpEntity_82DF5EB0 *entity);
extern void fn_82D9AFC0(ChainData_82DF5EB0 *data, const __vector4 *pivotInA, const __vector4 *pivotInB);
extern MemoryRouter_82DF5EB0 *fn_82CE5410(void);
extern void fn_82DF6A68(PivotArray_82DF5EB0 *array, hkMemoryAllocator_82DF5EB0 *alloc, int index,
                        int numToRemove, const PivotPair_82DF5EB0 *items, int numToInsert);
extern void fn_82DF6B40(ChainInstance_82DF5EB0 *chain, hkpEntity_82DF5EB0 *entity);

/* Appends or prepends the constraint's entities and pivots to the chain; 1 when it does not connect. */
int fn_82DF5EB0(ConstraintInstance_82DF5EB0 *constraint, ChainInstance_82DF5EB0 *chain,
                ChainData_82DF5EB0 *data)
{
    __vector4 pivotInA;
    __vector4 pivotInB;
    EntityArray_82DF5EB0 *entities = &chain->chainedEntities;
    hkpEntity_82DF5EB0 *last;
    hkpEntity_82DF5EB0 *first;
    PivotPair_82DF5EB0 pair;
    MemoryRouter_82DF5EB0 *router;

    if (fn_82DED480(constraint, &pivotInA, &pivotInB) == 0) {
        if (entities->size == 0) {
            fn_82D9CDC0(chain, constraint->entities[0]);
        }
        last = entities->data[entities->size - 1];
        if (last == constraint->entities[0]) {
            fn_82D9AFC0(data, &pivotInA, &pivotInB);
            fn_82D9CDC0(chain, constraint->entities[1]);
            return 0;
        }
        if (last == constraint->entities[1]) {
            fn_82D9AFC0(data, &pivotInB, &pivotInA);
            fn_82D9CDC0(chain, constraint->entities[0]);
            return 0;
        }
        first = entities->data[0];
        if (first == constraint->entities[0]) {
            pair.pivotInA = pivotInB;
            pair.pivotInB = pivotInA;
            router = fn_82CE5410();
            fn_82DF6A68(&data->infos, router->heap, 0, 0, &pair, 1);
            fn_82DF6B40(chain, constraint->entities[1]);
            return 0;
        }
        if (first == constraint->entities[1]) {
            pair.pivotInA = pivotInA;
            pair.pivotInB = pivotInB;
            router = fn_82CE5410();
            fn_82DF6A68(&data->infos, router->heap, 0, 0, &pair, 1);
            fn_82DF6B40(chain, constraint->entities[0]);
            return 0;
        }
    }
    return 1;
}

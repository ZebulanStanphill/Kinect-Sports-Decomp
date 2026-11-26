// hkpGenericConstraintDataScheme::hkpGenericConstraintDataScheme(hkFinishLoadedObjectFlag)
// (Physics/Dynamics/Constraint/ConstraintKit/hkpGenericConstraintScheme.cpp): when finishing, m_info is reset to
// the 16-byte header and rebuilt from the command stream (fn_82DC1250), then the largest schema is the whole size.
#include "havok/hkpGenericConstraintDataScheme.h"

extern "C" void fn_82DC1250(hkArray<int> *commands, hkpGenericConstraintDataScheme *scheme);

hkpGenericConstraintDataScheme::hkpGenericConstraintDataScheme(hkFinishLoadedObjectFlag flag)
    : m_data(flag), m_commands(flag), m_modifiers(flag), m_motors(flag)
{
    if (flag.m_finishing) {
        m_info.m_maxSizeOfSchema = 0;
        m_info.m_numSolverResults = 0;
        m_info.m_numSolverElemTemps = 0;
        m_info.m_sizeOfSchemas = 16;
        fn_82DC1250(&m_commands, this);
        m_info.m_maxSizeOfSchema = m_info.m_sizeOfSchemas;
    }
}

// hkxScene::hkxScene() (hkxScene.cpp): the hkStringPtr default constructors are out of line (fn_82CED2F8); the applied transform starts as the identity (hkMatrix3::getIdentity, fn_82CEBD78).
#include "havok/hkSceneData.h"

hkxScene::hkxScene() : m_sceneLength(0.0f), m_rootNode(HK_NULL)
{
    const hkMatrix3 &identity = hkMatrix3::getIdentity();
    m_appliedTransform = identity;
}

#ifndef COMPONENT_MESHDRAWABLE_HPP
#define COMPONENT_MESHDRAWABLE_HPP

#include <radix/component/Component.hpp>
#include <radix/core/math/Vector3f.hpp>
#include <radix/model/Mesh.hpp>
#include <radix/material/Material.hpp>

namespace radix {

class MeshDrawable : public Component {
public:
  Mesh mesh;
  // TODO: MaterialDrawable?
  Material material;

  MeshDrawable(Entity &ent) :
    Component(ent) {}
};

} /* namespace radix */

#endif /* COMPONENT_MESHDRAWABLE_HPP */
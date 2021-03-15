/*
 * Copyright (C) 2021 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef IGNITION_PHYSICS_DARTSIM_SRC_WORLDFEATURES_HH_
#define IGNITION_PHYSICS_DARTSIM_SRC_WORLDFEATURES_HH_

#include <ignition/physics/World.hh>

#include "Base.hh"

namespace ignition {
namespace physics {
namespace dartsim {

struct WorldFeatureList : FeatureList<
  PhysicsOptions
> { };

class WorldFeatures :
    public virtual Base,
    public virtual Implements3d<WorldFeatureList>
{
  // Documentation inherited
  public: void SetCollisionDetector(
      const Identity &_id, const std::string &_collisionDetector) override;

  // Documentation inherited
  public: const std::string &GetCollisionDetector(const Identity &_id) const
      override;

  // Documentation inherited
  public: void SetSolver(const Identity &_id, const std::string &_solver)
      override;

  // Documentation inherited
  public: const std::string &GetSolver(const Identity &_id) const override;
};

}
}
}

#endif

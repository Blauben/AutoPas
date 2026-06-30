#include "autopas/cells/FullParticleCell.h"
#include "autopas/containers/CellBasedParticleContainer.h"

namespace autopas {

template <class Particle_T>
class KDTree : public CellBasedParticleContainer<FullParticleCell<Particle_T>> {
 public:
  /**
   * Constructor of the KDTree class
   * @param boxMin
   * @param boxMax
   * @param cutoff
   * @param skin
   * @param sortingThreshold
   */
  KDTree(const std::array<double, 3> &boxMin, const std::array<double, 3> &boxMax, double cutoff, double skin,
         const size_t sortingThreshold)
      : CellBasedParticleContainer<FullParticleCell<Particle_T>>(boxMin, boxMax, cutoff, skin, sortingThreshold) {
}
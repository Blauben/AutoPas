

namespace autopas {
template <class Particle_T>
class KDTreeWrapper : public ParticleCell<Particle_T> {
 public:
  /**
   * Constructor of the KDTreeWrapper class
   * @param boxMin
   * @param boxMax
   * @param cutoff
   * @param skin
   * @param sortingThreshold
   */
  KDTreeWrapper(const std::array<double, 3> &boxMin, const std::array<double, 3> &boxMax, double cutoff, double skin,
                const size_t sortingThreshold)
      : ParticleCell<Particle_T>(boxMin, boxMax),
        _kdtree(boxMin, boxMax, cutoff, skin, sortingThreshold) {}

  };
}
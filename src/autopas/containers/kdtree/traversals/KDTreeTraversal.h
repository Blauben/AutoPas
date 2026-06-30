#include "KDTree/tree/TreeNode.h"

namespace autopas {

template <class Particle_T, class PairwiseFunctor>
class KDTreeTraversal : public CellTraversal<TreeNode<Particle_T>> {};

}
#include "ICP/ICPNEQ.hh"
#include "ICPNEQPhysicalModel.hh"
#include "Environment/ObjectProvider.hh"

//////////////////////////////////////////////////////////////////////////////

using namespace std;
using namespace COOLFluiD::Framework;
using namespace COOLFluiD::Common;

//////////////////////////////////////////////////////////////////////////////

namespace COOLFluiD {

  namespace Physics {

    namespace ICP {

//////////////////////////////////////////////////////////////////////////////

Environment::ObjectProvider<ICPNEQPhysicalModel<DIM_2D>, PhysicalModelImpl, ICPNEQModule, 1>
icpNEQ2DProvider("ICPNEQ2D");

Environment::ObjectProvider<ICPNEQPhysicalModel<DIM_3D>, PhysicalModelImpl, ICPNEQModule, 1>
icpNEQ3DProvider("ICPNEQ3D");

//////////////////////////////////////////////////////////////////////////////

    } // namespace ICP

  } // namespace Physics

} // namespace COOLFluiD

//////////////////////////////////////////////////////////////////////////////
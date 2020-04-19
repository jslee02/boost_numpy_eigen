#include <boost/python.hpp>
#include "eigen_numpy.h"

BOOST_PYTHON_MODULE(boost_numpy_eigen)
{
  SetupEigenConverters();
}

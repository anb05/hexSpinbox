#include "application.h"

namespace hspb {

Application::Application(int& argc, char** argv)
	: QApplication(argc, argv)
{}

Application::~Application() = default;

} // namespace hspb

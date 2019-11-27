#ifndef APPLICATION_H
#define APPLICATION_H

#include <QApplication>

namespace hspb {

class Application : public QApplication
{
	Q_OBJECT
public:
	explicit Application(int& argc, char** argv);
	~Application() override;

	explicit Application(const Application&)   = delete;
	explicit Application(Application&&)        = delete;

public:
	Application& operator=(const Application&) = delete;
	Application& operator=(Application&&)      = delete;
};

} // namespace spb

#endif // APPLICATION_H

#include <Poco/Net/HTTPServer.h>
#include <Poco/Net/HTTPRequestHandler.h>
#include <Poco/Net/HTTPRequestHandlerFactory.h>
#include <Poco/Net/HTTPResponse.h>
#include <Poco/Net/HTTPServerRequest.h>
#include <Poco/Net/HTTPServerResponse.h>
#include <Poco/Util/ServerApplication.h>

#include "RootController.h"

#include <iostream>
#include <string>
#include <vector>

using namespace Poco::Net;
using namespace Poco::Util;
using namespace std;


class MyRequestHandlerFactory : public HTTPRequestHandlerFactory
{
public:
	virtual HTTPRequestHandler* createRequestHandler(const HTTPServerRequest& request)
	{
		if (request.getURI() == "/")
			return new RootController();
		else
			return new RootController();
	}
};

class MyServerApp : public ServerApplication
{
protected:
	int main(const vector<string> &)
	{
		HTTPServer s(new MyRequestHandlerFactory, ServerSocket(9090), new HTTPServerParams);

		s.start();
		cout << endl << "Server started" << endl;

		waitForTerminationRequest();  // wait for CTRL-C or kill

		cout << endl << "Shutting down..." << endl;
		s.stop();

		return Application::EXIT_OK;
	}
};

int main(int argc, char** argv)
{
	MyServerApp app;
	return app.run(argc, argv);
}
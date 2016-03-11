#include "BaseController.h"

void BaseController::handleRequest(HTTPServerRequest &req, HTTPServerResponse &resp)
{
	//resp.setStatus(HTTPResponse::HTTP_OK);
	//resp.setContentType("text/html");

	//ostream& out = resp.send();
	//out << "<h1>Hello world!</h1>";
	//out.flush();

	cout << endl
		<< "Response sent and URI=" << req.getURI() << endl;
}
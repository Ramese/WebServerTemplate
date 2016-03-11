#include "RootController.h"

int RootController::count;

RootController::RootController() {
	
}

void RootController::handleRequest(HTTPServerRequest &req, HTTPServerResponse &resp)
{
	resp.setStatus(HTTPResponse::HTTP_OK);
	resp.setContentType("text/html");

	ostream& out = resp.send();
	out << "<h1>Hello world!</h1>"
		<< "<p>Count: " << count << "</p>"
		<< "<p>Host: " << req.getHost() << "</p>"
		<< "<p>Method: " << req.getMethod() << "</p>"
		<< "<p>URI: " << req.getURI() << "</p>";
	out.flush();

	cout << endl
		<< "Response sent for count=" << count
		<< " and URI=" << req.getURI() << endl;

	count++;
}
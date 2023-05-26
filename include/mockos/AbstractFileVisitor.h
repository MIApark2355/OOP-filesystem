#pragma once

class TextFile;
class ImageFile;
//abstract base class
class AbstractFileVisitor {
public:
	virtual void visit_TextFile(TextFile*) = 0;
	virtual void visit_ImageFile(ImageFile*) = 0;

};
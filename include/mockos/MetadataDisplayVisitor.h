#pragma once
#include "AbstractFileVisitor.h"

class MetadataDisplayVisitor : public AbstractFileVisitor {
public:
	virtual void visit_TextFile(TextFile*) override;
	virtual void visit_ImageFile(ImageFile*) override;
};
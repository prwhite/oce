// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlLDrivers_DocumentRetrievalDriver_HeaderFile
#define _XmlLDrivers_DocumentRetrievalDriver_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_XmlLDrivers_DocumentRetrievalDriver_HeaderFile
#include <Handle_XmlLDrivers_DocumentRetrievalDriver.hxx>
#endif

#ifndef _Handle_XmlMDF_ADriverTable_HeaderFile
#include <Handle_XmlMDF_ADriverTable.hxx>
#endif
#ifndef _XmlObjMgt_RRelocationTable_HeaderFile
#include <XmlObjMgt_RRelocationTable.hxx>
#endif
#ifndef _TCollection_ExtendedString_HeaderFile
#include <TCollection_ExtendedString.hxx>
#endif
#ifndef _PCDM_RetrievalDriver_HeaderFile
#include <PCDM_RetrievalDriver.hxx>
#endif
#ifndef _Handle_PCDM_Document_HeaderFile
#include <Handle_PCDM_Document.hxx>
#endif
#ifndef _Handle_CDM_Document_HeaderFile
#include <Handle_CDM_Document.hxx>
#endif
#ifndef _Handle_CDM_Application_HeaderFile
#include <Handle_CDM_Application.hxx>
#endif
#ifndef _XmlObjMgt_Element_HeaderFile
#include <XmlObjMgt_Element.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_CDM_MessageDriver_HeaderFile
#include <Handle_CDM_MessageDriver.hxx>
#endif
#ifndef _Handle_XmlMDF_ADriver_HeaderFile
#include <Handle_XmlMDF_ADriver.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class XmlMDF_ADriverTable;
class TCollection_ExtendedString;
class PCDM_Document;
class CDM_Document;
class CDM_Application;
class CDM_MessageDriver;
class XmlMDF_ADriver;



class XmlLDrivers_DocumentRetrievalDriver : public PCDM_RetrievalDriver {

public:

  
  Standard_EXPORT   XmlLDrivers_DocumentRetrievalDriver();
  
  Standard_EXPORT   virtual  TCollection_ExtendedString SchemaName() const;
  
  Standard_EXPORT   virtual  void Make(const Handle(PCDM_Document)& PD,const Handle(CDM_Document)& TD) ;
  
  Standard_EXPORT   virtual  Handle_CDM_Document CreateDocument() ;
  
  Standard_EXPORT   virtual  void Read(const TCollection_ExtendedString& theFileName,const Handle(CDM_Document)& theNewDocument,const Handle(CDM_Application)& theApplication) ;
  
  Standard_EXPORT   virtual  Handle_XmlMDF_ADriverTable AttributeDrivers(const Handle(CDM_MessageDriver)& theMsgDriver) ;




  DEFINE_STANDARD_RTTI(XmlLDrivers_DocumentRetrievalDriver)

protected:

  
  Standard_EXPORT   virtual  void ReadFromDomDocument(const XmlObjMgt_Element& theDomElement,const Handle(CDM_Document)& theNewDocument,const Handle(CDM_Application)& theApplication) ;
  
  Standard_EXPORT   virtual  Standard_Boolean MakeDocument(const XmlObjMgt_Element& thePDoc,const Handle(CDM_Document)& theTDoc) ;
  
  Standard_EXPORT   virtual  Handle_XmlMDF_ADriver ReadShapeSection(const XmlObjMgt_Element& thePDoc,const Handle(CDM_MessageDriver)& theMsgDriver) ;
  
  Standard_EXPORT   virtual  void ShapeSetCleaning(const Handle(XmlMDF_ADriver)& theDriver) ;
  
  Standard_EXPORT   virtual  void PropagateDocumentVersion(const Standard_Integer theDocVersion) ;

Handle_XmlMDF_ADriverTable myDrivers;
XmlObjMgt_RRelocationTable myRelocTable;
TCollection_ExtendedString myFileName;


private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif

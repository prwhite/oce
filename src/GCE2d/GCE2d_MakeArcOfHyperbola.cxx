// Created on: 1992-10-02
// Created by: Remi GILET
// Copyright (c) 1992-1999 Matra Datavision
// Copyright (c) 1999-2012 OPEN CASCADE SAS
//
// The content of this file is subject to the Open CASCADE Technology Public
// License Version 6.5 (the "License"). You may not use the content of this file
// except in compliance with the License. Please obtain a copy of the License
// at http://www.opencascade.org and read it completely before using this file.
//
// The Initial Developer of the Original Code is Open CASCADE S.A.S., having its
// main offices at: 1, place des Freres Montgolfier, 78280 Guyancourt, France.
//
// The Original Code and all software distributed under the License is
// distributed on an "AS IS" basis, without warranty of any kind, and the
// Initial Developer hereby disclaims all such warranties, including without
// limitation, any warranties of merchantability, fitness for a particular
// purpose or non-infringement. Please see the License for the specific terms
// and conditions governing the rights and limitations under the License.


#include <GCE2d_MakeArcOfHyperbola.ixx>
#include <StdFail_NotDone.hxx>
#include <Geom2d_Hyperbola.hxx>
#include <ElCLib.hxx>

GCE2d_MakeArcOfHyperbola::GCE2d_MakeArcOfHyperbola(const gp_Hypr2d&     Hypr ,
						 const gp_Pnt2d&        P1   ,
						 const gp_Pnt2d&        P2   ,
						 const Standard_Boolean Sense)
{
  Standard_Real Alpha1 = ElCLib::Parameter(Hypr,P1);
  Standard_Real Alpha2 = ElCLib::Parameter(Hypr,P2);
  Handle(Geom2d_Hyperbola) H = new Geom2d_Hyperbola(Hypr);
  TheArc = new Geom2d_TrimmedCurve(H,Alpha1,Alpha2,Sense);
  TheError = gce_Done;
}

GCE2d_MakeArcOfHyperbola::
  GCE2d_MakeArcOfHyperbola(const gp_Hypr2d&       Hypr  ,
			   const gp_Pnt2d&        P     ,
			   const Standard_Real    Alpha ,
			   const Standard_Boolean Sense )
{
  Standard_Real Alphafirst = ElCLib::Parameter(Hypr,P);
  Handle(Geom2d_Hyperbola) H = new Geom2d_Hyperbola(Hypr);
  TheArc = new Geom2d_TrimmedCurve(H,Alphafirst,Alpha,Sense);
  TheError = gce_Done;
}

GCE2d_MakeArcOfHyperbola::
  GCE2d_MakeArcOfHyperbola(const gp_Hypr2d&       Hypr ,
			   const Standard_Real    Alpha1,
			   const Standard_Real    Alpha2,
			   const Standard_Boolean Sense )
{
  Handle(Geom2d_Hyperbola) H = new Geom2d_Hyperbola(Hypr);
  TheArc = new Geom2d_TrimmedCurve(H,Alpha1,Alpha2,Sense);
  TheError = gce_Done;
}

const Handle(Geom2d_TrimmedCurve)& GCE2d_MakeArcOfHyperbola::Value() const
{ 
  StdFail_NotDone_Raise_if(!(TheError == gce_Done),"");
  return TheArc;
}

const Handle(Geom2d_TrimmedCurve)& GCE2d_MakeArcOfHyperbola::Operator() const 
{
  return Value();
}

GCE2d_MakeArcOfHyperbola::operator Handle(Geom2d_TrimmedCurve) () const
{
  return Value();
}


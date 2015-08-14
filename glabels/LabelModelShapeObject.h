/*  LabelModelShapeObject.h
 *
 *  Copyright (C) 2013  Jim Evins <evins@snaught.com>
 *
 *  This file is part of gLabels-qt.
 *
 *  gLabels-qt is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  gLabels-qt is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with gLabels-qt.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef glabels_LabelModelShapeObject_h
#define glabels_LabelModelShapeObject_h

#include "LabelModelObject.h"


namespace glabels
{

	///
	/// Label Model Shape Object (Box or Ellipse)
	///
	class LabelModelShapeObject : public LabelModelObject
	{
		Q_OBJECT

		///////////////////////////////////////////////////////////////
		// Lifecycle Methods
		///////////////////////////////////////////////////////////////
	protected:
		LabelModelShapeObject( QObject* parent = 0 );
	public:
		virtual ~LabelModelShapeObject();


		///////////////////////////////////////////////////////////////
		// Property Implementations
		///////////////////////////////////////////////////////////////
	public:
		//
		// Shape Property: lineWidth
		//
		virtual double lineWidth( void ) const;
		virtual void setLineWidth( double value );


		//
		// Shape Property: lineColorNode
		//
		virtual ColorNode lineColorNode( void ) const;
		virtual void setLineColorNode( const ColorNode& value );
		

		//
		// Shape Property: fillColorNode
		//
		virtual ColorNode fillColorNode( void ) const;
		virtual void setFillColorNode( const ColorNode& value );
		

		///////////////////////////////////////////////////////////////
		// Capability Implementations
		///////////////////////////////////////////////////////////////
	public:
		virtual bool canFill();
		virtual bool canLineColor();
		virtual bool canLineWidth();


		///////////////////////////////////////////////////////////////
		// Private Members
		///////////////////////////////////////////////////////////////
	protected:
		double     mLineWidth;
		ColorNode  mLineColorNode;
		ColorNode  mFillColorNode;

	};

}

#endif // glabels_LabelModelShapeObject_h

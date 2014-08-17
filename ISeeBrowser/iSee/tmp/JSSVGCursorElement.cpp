/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"


#if ENABLE(SVG)

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGCursorElement.h"

#include <wtf/GetPtr.h>

#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGStringList.h"
#include "SVGCursorElement.h"
#include "SVGStringList.h"

#include <kjs/Error.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGCursorElement)

/* Hash table */

static const HashTableValue JSSVGCursorElementTableValues[8] =
{
    { "x", (intptr_t)JSSVGCursorElement::XAttrNum, DontDelete|ReadOnly, 0 },
    { "y", (intptr_t)JSSVGCursorElement::YAttrNum, DontDelete|ReadOnly, 0 },
    { "href", (intptr_t)JSSVGCursorElement::HrefAttrNum, DontDelete|ReadOnly, 0 },
    { "requiredFeatures", (intptr_t)JSSVGCursorElement::RequiredFeaturesAttrNum, DontDelete|ReadOnly, 0 },
    { "requiredExtensions", (intptr_t)JSSVGCursorElement::RequiredExtensionsAttrNum, DontDelete|ReadOnly, 0 },
    { "systemLanguage", (intptr_t)JSSVGCursorElement::SystemLanguageAttrNum, DontDelete|ReadOnly, 0 },
    { "externalResourcesRequired", (intptr_t)JSSVGCursorElement::ExternalResourcesRequiredAttrNum, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGCursorElementTable = { 31, JSSVGCursorElementTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSSVGCursorElementPrototypeTableValues[2] =
{
    { "hasExtension", (intptr_t)jsSVGCursorElementPrototypeFunctionHasExtension, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGCursorElementPrototypeTable = { 0, JSSVGCursorElementPrototypeTableValues, 0 };

const ClassInfo JSSVGCursorElementPrototype::s_info = { "SVGCursorElementPrototype", 0, &JSSVGCursorElementPrototypeTable, 0 };

JSObject* JSSVGCursorElementPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGCursorElement.prototype]]");
    return JSC::cacheGlobalObject<JSSVGCursorElementPrototype>(exec, *prototypeIdentifier);
}

bool JSSVGCursorElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGCursorElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGCursorElement::s_info = { "SVGCursorElement", &JSSVGElement::s_info, &JSSVGCursorElementTable , 0 };

JSSVGCursorElement::JSSVGCursorElement(JSObject* prototype, SVGCursorElement* impl)
    : JSSVGElement(prototype, impl)
{
}

bool JSSVGCursorElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGCursorElement, Base>(exec, &JSSVGCursorElementTable, this, propertyName, slot);
}

JSValue* JSSVGCursorElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case XAttrNum: {
        SVGCursorElement* imp = static_cast<SVGCursorElement*>(impl());
        RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case YAttrNum: {
        SVGCursorElement* imp = static_cast<SVGCursorElement*>(impl());
        RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case HrefAttrNum: {
        SVGCursorElement* imp = static_cast<SVGCursorElement*>(impl());
        RefPtr<SVGAnimatedString> obj = imp->hrefAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case RequiredFeaturesAttrNum: {
        SVGCursorElement* imp = static_cast<SVGCursorElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->requiredFeatures()), imp);
    }
    case RequiredExtensionsAttrNum: {
        SVGCursorElement* imp = static_cast<SVGCursorElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->requiredExtensions()), imp);
    }
    case SystemLanguageAttrNum: {
        SVGCursorElement* imp = static_cast<SVGCursorElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->systemLanguage()), imp);
    }
    case ExternalResourcesRequiredAttrNum: {
        SVGCursorElement* imp = static_cast<SVGCursorElement*>(impl());
        RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
        return toJS(exec, obj.get(), imp);
    }
    }
    return 0;
}

JSValue* jsSVGCursorElementPrototypeFunctionHasExtension(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGCursorElement::s_info))
        return throwError(exec, TypeError);
    JSSVGCursorElement* castedThisObj = static_cast<JSSVGCursorElement*>(thisValue);
    SVGCursorElement* imp = static_cast<SVGCursorElement*>(castedThisObj->impl());
    const UString& extension = args.at(exec, 0)->toString(exec);


    JSC::JSValue* result = jsBoolean(imp->hasExtension(extension));
    return result;
}


}

#endif // ENABLE(SVG)
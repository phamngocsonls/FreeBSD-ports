# $FreeBSD$

PORTNAME=	qtconsole
PORTVERSION=	4.4.4
PORTREVISION=	2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Qt-based console for Jupyter with support for rich media output

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}ipykernel5>=5.1:devel/py-ipykernel5@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}jupyter_client>=4.1:devel/py-jupyter_client@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}jupyter_core>=0:devel/py-jupyter_core@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pygments>=0:textproc/py-pygments@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}traitlets>=0:devel/py-traitlets@${PY_FLAVOR}

USES=		pyqt:5 python:3.6+

USE_PYQT=	core gui svg sip printsupport widgets
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>

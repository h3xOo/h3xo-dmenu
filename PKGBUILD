_pkgname=h3xo-dmenu
pkgname=dmenu
pkgver=5.0
pkgrel=1
pkgdesc="h3xo's dmenu"
url=https://gitlab.com/h3xOo/h3xo-dmenu
arch=('i686' 'x86_64')
license=('GPL3')
makedepends=('git')
depends=('libxinerama' 'libxft')
optdepends=(
	'libxft-bgra: if dwm crashes when displaying emojis'
	'libxft-bgra-git: if dwm crashes when displaying emojis')
provides=($pkgname)
conflicts=($pkgname)
source=(git+https://gitlab.com/h3xOo/h3xo-dmenu)
sha256sums=('SKIP')

pkgver() {
	cd "$_pkgname"
	echo "$(awk '/^VERSION =/ {print $3}' config.mk)".r"$(git rev-list --count HEAD)"."$(git rev-parse --short HEAD)"
}

prepare() {
	cd "$_pkgname"
	echo "CPPFLAGS+=${CPPFLAGS}" >> config.mk
	echo "CFLAGS+=${CFLAGS}" >> config.mk
	echo "LDFLAGS+=${LDFLAGS}" >> config.mk
	# to use a custom config.h, place it in the package directory
	if [[ -f ${SRCDEST}/config.h ]]; then
		cp "${SRCDEST}/config.h" .
	fi
}

build() {
	cd "$_pkgname"
	make X11INC=/usr/include/X11 X11LIB=/usr/lib/X11
}

package() {
	cd "$_pkgname"
	make PREFIX=/usr DESTDIR="$pkgdir" install
	install -Dm644 LICENSE "$pkgdir/usr/share/licenses/$pkgname/LICENSE"
}

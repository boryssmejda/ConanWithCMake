$SCRIPTS_LOCATION = Get-Location
$PROJECT_ROOT = Join-Path -Path $SCRIPTS_LOCATION -ChildPath "..\..\.." -Resolve
$DEPS_DIR = Join-Path -Path $PROJECT_ROOT -ChildPath "deps"
$BUILD_DIR = Join-Path -Path $PROJECT_ROOT -ChildPath "build"
$INSTALL_DIR = Join-Path -Path $PROJECT_ROOT -ChildPath "install"
$CONANFILE_LOCATION = Join-Path -Path $PROJECT_ROOT -ChildPath "conan\conanfiles\desktop\conanfile.txt"
$CONAN_PROFILE_LOCATION = Join-Path -Path $PROJECT_ROOT -ChildPath "conan\profiles\conan-profile-windows.txt"

function Show-ProjectPaths
{

    Get-Variable PROJECT_ROOT
    Get-Variable SCRIPTS_LOCATION
    Get-Variable BUILD_DIR
    Get-Variable INSTALL_DIR
    Get-Variable DEPS_DIR
    Get-Variable CONANFILE_LOCATION
    Get-Variable CONAN_PROFILE_LOCATION
}

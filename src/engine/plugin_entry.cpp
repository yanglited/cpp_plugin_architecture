#include "plugin_entry.h"

#include <utility>

/**
 * Constructor.
 *
 * @param type The plugin type
 * @param name The plugin name
 * @param libName The plugin library name
 */
PluginEntry::PluginEntry(std::string type, std::string name, std::string libName)
  : m_type(std::move(type))
  , m_name(std::move(name))
  , m_libName(std::move(libName))
{
}


/**
 * Destructor.
 */
PluginEntry::~PluginEntry()
= default;


/**
 * Gets the plugin id, which is a derived property.
 * 
 * @return The plugin id
 */
std::string PluginEntry::getId() const
{
  return m_type + "::" + m_name;
}


/**
 * Gets the plugin type.
 *
 * @return The plugin type
 */
std::string PluginEntry::getType() const
{
  return m_type;
}


/**
 * Gets the plugin name.
 *
 * @return The plugin name
 */
std::string PluginEntry::getName() const
{
  return m_name;
}


/**
 * Gets the plugin library name.
 *
 * @return The plugin library name
 */
std::string PluginEntry::getLibName() const
{
  return m_libName;
}

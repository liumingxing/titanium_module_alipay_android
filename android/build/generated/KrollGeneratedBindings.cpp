/* C++ code produced by gperf version 3.0.4 */
/* Command-line: gperf -L C++ -E -t /private/var/folders/zs/vnwhksk11g503n_zhq9jkl2c0000gn/T/liumeisei/alipay_android-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/zs/vnwhksk11g503n_zhq9jkl2c0000gn/T/liumeisei/alipay_android-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "com.mamashai.alipay.AlipayAndroidModule.h"
#include "com.mamashai.alipay.ExampleProxy.h"


#line 14 "/private/var/folders/zs/vnwhksk11g503n_zhq9jkl2c0000gn/T/liumeisei/alipay_android-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 8, duplicates = 0 */

class AlipayAndroidBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
AlipayAndroidBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
AlipayAndroidBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 32,
      MAX_WORD_LENGTH = 39,
      MIN_HASH_VALUE = 32,
      MAX_HASH_VALUE = 39
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 17 "/private/var/folders/zs/vnwhksk11g503n_zhq9jkl2c0000gn/T/liumeisei/alipay_android-generated/KrollGeneratedBindings.gperf"
      {"com.mamashai.alipay.ExampleProxy", ::com::mamashai::alipay::alipayandroid::ExampleProxy::bindProxy, ::com::mamashai::alipay::alipayandroid::ExampleProxy::dispose},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 16 "/private/var/folders/zs/vnwhksk11g503n_zhq9jkl2c0000gn/T/liumeisei/alipay_android-generated/KrollGeneratedBindings.gperf"
      {"com.mamashai.alipay.AlipayAndroidModule", ::com::mamashai::alipay::AlipayAndroidModule::bindProxy, ::com::mamashai::alipay::AlipayAndroidModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "/private/var/folders/zs/vnwhksk11g503n_zhq9jkl2c0000gn/T/liumeisei/alipay_android-generated/KrollGeneratedBindings.gperf"


test = {
  'name': 'Question 3',
  'points': 1,
  'suites': [
    {
      'cases': [
        {
          'code': r"""
          >>> select_dice(4, 24) == four_sided
          bc6c4798917b91886d7fa5f56e42878f
          # locked
          >>> select_dice(16, 64) == four_sided
          d763fd836a7bfb096222e985b161b406
          # locked
          >>> select_dice(0, 0) == four_sided
          bc6c4798917b91886d7fa5f56e42878f
          # locked
          >>> select_dice(50, 80) == four_sided
          d763fd836a7bfb096222e985b161b406
          # locked
          """,
          'hidden': False,
          'locked': True
        },
        {
          'code': r"""
          >>> max_dice(7, 10)
          43d176e102c8d95338faf8791aa509b3
          # locked
          >>> max_dice(10, 7)
          43d176e102c8d95338faf8791aa509b3
          # locked
          >>> max_dice(23, 44)
          43d176e102c8d95338faf8791aa509b3
          # locked
          >>> max_dice(35, 35)
          70e71b420a966665c548a3bb2cb30d7d
          # locked
          """,
          'hidden': False,
          'locked': True
        },
        {
          'code': r"""
          >>> max_dice(7, 7)
          10
          >>> max_dice(40, 7)
          1
          """,
          'hidden': False,
          'locked': False
        }
      ],
      'scored': True,
      'setup': r"""
      >>> from hog import *
      """,
      'teardown': '',
      'type': 'doctest'
    }
  ]
}

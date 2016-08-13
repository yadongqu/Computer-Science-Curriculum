test = {
  'name': 'Question 4',
  'points': 1,
  'suites': [
    {
      'cases': [
        {
          'code': r"""
          >>> is_swap(19)
          d763fd836a7bfb096222e985b161b406
          # locked
          """,
          'hidden': False,
          'locked': True
        },
        {
          'code': r"""
          >>> is_swap(44)
          bc6c4798917b91886d7fa5f56e42878f
          # locked
          """,
          'hidden': False,
          'locked': True
        },
        {
          'code': r"""
          >>> is_swap(23)
          d763fd836a7bfb096222e985b161b406
          # locked
          """,
          'hidden': False,
          'locked': True
        },
        {
          'code': r"""
          >>> is_swap(55)
          bc6c4798917b91886d7fa5f56e42878f
          # locked
          """,
          'hidden': False,
          'locked': True
        },
        {
          'code': r"""
          >>> is_swap(2) # Single digits have one unique digit
          bc6c4798917b91886d7fa5f56e42878f
          # locked
          """,
          'hidden': False,
          'locked': True
        },
        {
          'code': r"""
          >>> is_swap(12)
          False
          """,
          'hidden': False,
          'locked': False
        },
        {
          'code': r"""
          >>> is_swap(65)
          False
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

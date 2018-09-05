**joincfe-Tweetme**

[github-codingforentrepreneurs/Tweetme](https://github.com/codingforentrepreneurs/Tweetme)

[toc]

## Django Starting & Setup

### Step by Step with Django

`makdir udemy-tweetme-django && cd udemy-tweetme-django`新建项目目录并进入该目录

`sudo pip install pipenv` 安装pipenv

`pipenv --three`在该项目目录下新建python3虚拟环境

`pipenv shell`激活该项目目录下的虚拟环境

`pipenv install django==2.1`安装django 2.1版本

```python
# 根据需要安装第三方包
# for a postgresql database
pipenv install psycopg2

# for a mysql database
pipenv install MySQL-python

# for use on heroku
pipenv install gunicorn dj-database-url

pipenv install django-crispy-forms
pipenv install pillow
```

`python -m django --version`检测是否安装好django

`django-admin startproject tweetme .`在该目录下新建名为tweetme的django项目

`python manage.py runserver`查看是否成功运行Django 项目

`python manage.py makemigrations`检查数据库的表是否改动

`python manage.py migrate`数据库表的同步

`python manage.py createsuperuser`创建后台管理员账户admin密码admin123

`python manage.py runserver`运行Django 项目

访问<http://localhost:8000/admin/>输入管理员账户密码进入后台

[codingforentrepreneurs/Guides](https://github.com/codingforentrepreneurs/Guides/blob/master/all/Create_a_Local_Django_Project.md)

### Django Settings

**creating a Django project for use in both Local & Production (deployment) environments**

`cd tweetme && mkdir settings && cd settings`新建settings文件夹来分别存放开发配置和部署配置

Create **__init__.py** within new Settings folder to make it a module. Add the following:

```python
# File: tweetme/settings/__init__.py

from .base import *

from .production import *

try:
   from .local import *
except:
   pass
```

```python
#File: tweetme/settings.py

...
BASE_DIR = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
...
```

`mv settings.py settings/base.py`把默认的配置移动到settings文件夹下并重命名为base.py作为基础配置

`cp base.py local.py && cp base.py production.py`把base.py的基础配置复制到local和production

`python manage.py runserver`运行Django 服务器查看是否配置成功

### Django & Serving Startic Files

### View Function & templates

### Integrate Bootstrap

## Tweet App

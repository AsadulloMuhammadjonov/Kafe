object FormXodimlar: TFormXodimlar
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'FormXodimlar'
  ClientHeight = 624
  ClientWidth = 996
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -24
  Font.Name = 'Tahoma'
  Font.Style = [fsBold]
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 29
  object DBGrid1: TDBGrid
    Left = 0
    Top = 128
    Width = 996
    Height = 496
    Align = alBottom
    DataSource = DataModule2.DataSourceXodimlar
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -24
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = [fsBold]
    Columns = <
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'id'
        Title.Alignment = taCenter
        Visible = False
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Fish'
        Title.Alignment = taCenter
        Width = 174
        Visible = True
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Parol'
        Title.Alignment = taCenter
        Width = 90
        Visible = True
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Huquq'
        Title.Alignment = taCenter
        Width = 141
        Visible = True
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Tel'
        Title.Alignment = taCenter
        Width = 272
        Visible = True
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Ish_Xaqqi'
        Title.Alignment = taCenter
        Width = 173
        Visible = True
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Xaqqi'
        Title.Alignment = taCenter
        Width = 123
        Visible = True
      end>
  end
  object Button1: TButton
    Left = 169
    Top = 23
    Width = 209
    Height = 65
    Caption = 'Qo'#39'shish'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 433
    Top = 23
    Width = 209
    Height = 65
    Caption = 'O'#39'chirish'
    TabOrder = 2
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 697
    Top = 23
    Width = 209
    Height = 65
    Caption = 'O'#39'zgartirish'
    TabOrder = 3
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 0
    Top = 0
    Width = 121
    Height = 49
    Caption = 'Ko'#39'rish'
    TabOrder = 4
    OnClick = Button4Click
  end
end
